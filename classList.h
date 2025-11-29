#ifndef CLASSLIST_H
#define CLASSLIST_H

#include <string>
#include <iostream>
using namespace std;

class List {
private:
    class node {
    public:
    // Data members
        int id;             // Card number
        string name;        // Card name 
        int elixir;         // Number of elixirs required  
        node* next;         // Pointer to the next node  
    };
    node *head, *cursor, *prev;   
public:
    //  Constructor
    List();

    //  Member functions
    bool ListIsEmpty() const; // return true if list is empty
    bool cursorIsEmpty()const; // return true if cursor is empty
    void toFirst(); // set cursor to value of head
    bool atFirst () const;  // return true if cursor is at head
    void Advance(); // move cursor to next node
    void toEnd(); // to move cursor to last node
    bool atEnd() const ; // return true if cursor is at last node
    int ListCount() const;  // return the number of nodes in the list
    void updateKey(int newId);    // update the id of the current card
    void updateData(const string &newName); // update the name of the current card
    void updateElixir(int newElixir); // update the elixir of the current card

    int RetrieveId() const;                 // return the id of the current card
    void RetrieveId(int &x) const;          // retrieve the id into external variable

    string RetrieveName() const;            // return the name of the current card
    void RetrieveName(string &n) const;     // retrieve the name into external variable

    int RetrieveElixir() const;             // return the elixir of the current card
    void RetrieveElixir(int &x) const;      // retrieve the elixir into external variable

    void insertFirst(int id, const string &name, int elixir); // insert a new node at the beginning of the list
    void insertAfter(int id, const string &name, int elixir); // insert a new node after the current node
    void insertBefore(int id, const string &name, int elixir); // insert a new node before the current node
    void insertEnd(int id, const string &name, int elixir); // insert a new node at the end of the list
    void deleteNode(); // delete the current node
    void deleteAtFirst(); // delete the first node
    void deleteEnd(); // delete the last node
    void MakeListEmpty(); // make the list empty
    bool searchById(const int &i); // move cursor to the found card if exists
    bool searchByName(const string &n); // move cursor to the card with the given name
    void traverse() const; // display all cards in the list
    void orderInsert(int id, const string &name, int elixir); // insert a new card in order
};

#endif

