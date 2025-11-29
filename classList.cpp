#include "classList.h"
#include <iostream>
#include <string>

using namespace std;

// function implementation
List::List() {
    head = cursor = prev = NULL;
}

// function ( check if the list is empty )   
bool List::ListIsEmpty() const{  
   return(head == NULL);
}

// function ( check if the cursor is empty )   
bool List::cursorIsEmpty() const{  
   return(cursor == NULL);
}

// function to set cursor to the first node
void List::toFirst() {
    cursor = head; 
    prev = NULL; 
}

bool List::atFirst() const {
    return cursor == head;  // true إذا كان cursor عند الرأس، false غير ذلك
}

// move cursor to next node
void List::Advance() {
    if(cursor != NULL){
        prev = cursor;
       cursor = cursor->next; 
    }  
}

// move cursor to last node
void List::toEnd() {
    if(!ListIsEmpty()) {      
        toFirst();             
        while(cursor->next != NULL) {
            Advance();         
        }
    }
}

// return true if cursor is at last node
bool List::atEnd() const {
   if(ListIsEmpty() || cursor == NULL) {
       return true;
   } else {
       return cursor->next == NULL;
   }
}

// return the number of nodes in the list
int List::ListCount() const {
    int counter = 0;
    node* p = head;           
    while(p != NULL) {     
        counter++;
        p = p->next;        
    }
    return counter;        
}

// Update the id of the current card
void List::updateKey(int newId) {
    if(cursor != NULL) {
        cursor->id = newId;
    } else {
        std::cout << "Cursor is empty. Cannot update ID.\n";
    }
}

// Update the name of the current card
void List::updateData(const string &newName) {
    if(cursor != NULL) {
        cursor->name = newName;
    } else {
        std::cout << "Cursor is empty. Cannot update name.\n";
    }
}

// Update the elixir of the current card
void List::updateElixir(int newElixir) {
    if(cursor != NULL) {
        cursor->elixir = newElixir;
    } else {
        std::cout << "Cursor is empty. Cannot update elixir.\n";
    }
}

// Retrieve the id of the current card
int List::RetrieveId() const {
    if(cursor != NULL)
        return cursor->id;
    else {
        cout << "Cursor is empty.\n";
        return -1;
    }
}

// retrieve the id into external variable
void List::RetrieveId(int &x) const {
    if(cursor != NULL)
        x = cursor->id;
    else {
        cout << "Cursor is empty.\n";
        x = -1;
    }
}

// Retrieve the name of the current card 
string List::RetrieveName() const {
    if(cursor != NULL)
        return cursor->name;
    else {
        cout << "Cursor is empty.\n";
        return "";
    }
}

// retrieve the name into external variable
void List::RetrieveName(string &n) const {
    if(cursor != NULL)
        n = cursor->name;
    else {
        cout << "Cursor is empty.\n";
        n = "";
    }
}

// Retrieve the elixir of the current card
int List::RetrieveElixir() const {
    if(cursor != NULL)
        return cursor->elixir;
    else {
        cout << "Cursor is empty.\n";
        return -1;
    }
}

// retrieve the elixir into external variable
void List::RetrieveElixir(int &e) const {
    if(cursor != NULL)
        e = cursor->elixir;
    else {
        cout << "Cursor is empty.\n";
        e = -1;
    }
}

//  insert a new node at the beginning of the list
void List::insertFirst(int id, const string &name, int elixir) {
    node *p = new node; 
    p->id = id;
    p->name = name;
    p->elixir = elixir;

    p->next = head;
    head = p;
    cursor = head;
    prev = NULL;
}

// Insert a new card after the current cursor position
void List::insertAfter(int id, const string &name, int elixir) {
    if (cursor == NULL) {  
        cout << "Cursor is empty. Cannot insert after.\n";
        return;
    }

    node *p = new node;  
    p->id = id;
    p->name = name;
    p->elixir = elixir;

    p->next = cursor->next; 
    cursor->next = p;       
    prev = cursor;          
    cursor = p;           
}

// Insert a new card before the current cursor position
void List::insertBefore(int id, const string &name, int elixir) {
    if (cursor == NULL) {  
        cout << "Cursor is empty. Cannot insert before.\n";
        return;
    }

    if (cursor == head) {   
        insertFirst(id, name, elixir); 
    } else {                
        node *p = new node;  
        p->id = id;
        p->name = name;
        p->elixir = elixir;

        p->next = cursor;   
        prev->next = p;     
        prev = p;           
        cursor = p;         
    }
}


// Insert a new node at the end of the list
void List::insertEnd(int id, const string &name, int elixir) {
    node *p = new node;
    p->id = id;
    p->name = name;
    p->elixir = elixir;
    p->next = NULL;

    if (ListIsEmpty()) {
        head = p;
        cursor = head;
        prev = NULL;
    } else {
        toEnd();           
        cursor->next = p;   
        prev = cursor;
        cursor = p;         
    }
}

// Delete the current node
void List::deleteNode(){
   
    node *p;
    p= cursor;
    if(!cursorIsEmpty())
    {
    if(atFirst())
    {
         cursor=cursor->next;
         head=head->next;
         delete p;
    }else{
      cursor=cursor->next;
      prev->next= cursor;
      delete p;
    }
  }
}

// Delete the first node
void List::deleteAtFirst(){
    if (!ListIsEmpty()){
        toFirst();
        deleteNode();
       // node *p;
      //  p= head;
       // head= head->next;
      //  cursor=head;
       // delete p;
    }
}

// Delete the last node
void List::deleteEnd(){
     if (ListIsEmpty()) {
        std::cout << "The List is Empty \n";
        return;
    }

   
    if (head->next == NULL) {
        delete head;
        head = cursor = prev = NULL;
        return;
    }

    
    toFirst();             
    while (cursor->next != NULL) {
        prev = cursor;     
        cursor = cursor->next; 
    }

    
    prev->next = NULL;    
    delete cursor;          
    cursor = prev;          
}

// Delete all nodes in the list
void List::MakeListEmpty() {
    if (!ListIsEmpty()) {
        toFirst();
        node *p;

        while (cursor != NULL) {  
            p = cursor;               
            cursor = cursor->next;   
            delete p;                 
        }
        head = cursor = prev = NULL;
    }
}

// Search for a card by its id
bool List::searchById(const int &i) {
    toFirst();    
    prev = NULL;

    while (cursor != NULL) {
        if (cursor->id == i) {
            return true;   
        }
        prev = cursor;
        cursor = cursor->next;
    }
    return false;
}

// Search for a card by its name
bool List::searchByName(const string &n) {
    toFirst();          
    prev = NULL;    

    while (cursor != NULL) {
        if (cursor->name == n) {  
            return true;          
        }
        prev = cursor;          
        cursor = cursor->next;    
    }
    return false;
}

// Traverse the list and display all cards
void List::traverse() const {
    if (ListIsEmpty()) {
        cout << "The list is empty.\n";
        return;
    }

    node* temp = head;  
    cout << "\n--- Clash Royale Cards ---\n";
    while (temp != nullptr) {
        cout << "ID: " << temp->id
             << " | Name: " << temp->name
             << " | Elixir: " << temp->elixir << endl;
        temp = temp->next; 
    }
    cout << "---------------------------\n";
}


void List::orderInsert(int id, const string &name, int elixir) {
    if (ListIsEmpty()) {
        insertFirst(id, name, elixir);
        return;
    }

    toFirst();
    prev = nullptr;

    while (cursor != nullptr && elixir > cursor->elixir) {
        prev = cursor;
        cursor = cursor->next;
    }

    if (prev == nullptr) {
        insertFirst(id, name, elixir);
    } else if (cursor == nullptr) {
        insertEnd(id, name, elixir);   
    } else {
        insertBefore(id, name, elixir); 
    }
}




