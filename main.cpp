#include "classList.h"
#include <iostream>
#include <string>
using namespace std;


int main(){

         List cards;
  // add 10 cards to the list using orderInsert
    cards.orderInsert(1, "Knight", 3);
    cards.orderInsert(2, "Archers", 3);
    cards.orderInsert(3, "Giant", 5);
    cards.orderInsert(4, "Baby Dragon", 4);
    cards.orderInsert(5, "Minions", 3);
    cards.orderInsert(6, "Hog Rider", 4);
    cards.orderInsert(7, "PEKKA", 7);
    cards.orderInsert(8, "Balloon", 5);
    cards.orderInsert(9, "Skeletons", 1);
    cards.orderInsert(10, "Wizard", 5);

    // display the first 10 cards
    cout << "Original list of first 10 Clash Royale cards:\n";
    cards.traverse();

    // add 5 new cards at the end using insertEnd()
    cards.insertEnd(11, "Valkyrie", 4);
    cards.insertEnd(12, "Musketeer", 4);
    cards.insertEnd(13, "Mini P.E.K.K.A", 4);
    cards.insertEnd(14, "Fire Spirits", 2);
    cards.insertEnd(15, "Goblin Gang", 3);

    // display the updated list
    cout << "\nList after adding 5 new cards at the end:\n";
    cards.traverse();
    
   // search for a card by its name
    if(cards.searchByName("Giant")) {
        cout << "\nFound card 'Giant'. Elixir cost: " << cards.RetrieveElixir() << endl;
    } else {
        cout << "\nCard 'Giant' not found.\n";
    }

    cout << "Total number of cards: \n" << cards.ListCount() << endl;

    return 0;
}