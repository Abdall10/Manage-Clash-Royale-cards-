# Clash Royale Card Manager

![Clash Royale Card Manager](./Card.png)  

**Clash Royale** is a popular real-time strategy mobile game where players collect and upgrade cards featuring troops, spells, and defenses from the Clash universe. Each card has a specific **Elixir cost** required to deploy it in battles.

A simple **C++ project** to manage Clash Royale cards using a **singly linked list**. You can **insert cards in order**, **add cards at the end**, **search by name or ID**, and **display all cards** along with their Elixir cost.  

---

## Features

- Insert cards in **ascending Elixir order**
- Add cards to the **end of the list**
- **Search** cards by **name** or **ID**
- Display the **full list of cards**
- Count the **total number of cards**

---

## Cards Included

**Initial 10 cards:**

| ID | Name          | Elixir |
|----|---------------|--------|
| 1  | Knight        | 3      |
| 2  | Archers       | 3      |
| 3  | Giant         | 5      |
| 4  | Baby Dragon   | 4      |
| 5  | Minions       | 3      |
| 6  | Hog Rider     | 4      |
| 7  | PEKKA         | 7      |
| 8  | Balloon       | 5      |
| 9  | Skeletons     | 1      |
| 10 | Wizard        | 5      |

**Additional 5 cards added at the end:**

| ID  | Name            | Elixir |
|-----|-----------------|--------|
| 11  | Valkyrie        | 4      |
| 12  | Musketeer       | 4      |
| 13  | Mini P.E.K.K.A  | 4      |
| 14  | Fire Spirits    | 2      |
| 15  | Goblin Gang     | 3      |

---

## How to Compile & Run

1. Open a terminal in the project directory.
2. Compile the source files:  
   ```bash
   g++ -c classList.cpp
   g++ main.cpp classList.o -o myProgram

3. Run the program:
   ./myProgram

## Notes

This project consists of three main files:

1. **classList.h**  
   - Header file that defines the `List` class and its private `node` class.
   - Declares all member functions for managing the linked list of cards.

2. **classList.cpp**  
   - Implements all the member functions of the `List` class.
   - Handles creation, insertion, deletion, traversal, searching, and updating of cards.

3. **main.cpp** (or src.cpp)  
   - Contains the `main` function.
   - Demonstrates the usage of the `List` class:
     - Adding cards in order (`orderInsert`)
     - Adding cards at the end (`insertEnd`)
     - Traversing and displaying the list (`traverse`)
     - Searching for a card by name (`searchByName`)
     - Counting total cards (`ListCount`)
   
---

### Functions Implemented

- **List Management**  
  `ListIsEmpty()`, `cursorIsEmpty()`, `toFirst()`, `toEnd()`, `Advance()`, `atFirst()`, `atEnd()`, `ListCount()`, `MakeListEmpty()`

- **Card Update / Retrieval**  
  `updateKey()`, `updateData()`, `updateElixir()`  
  `RetrieveId()`, `RetrieveId(int &x)`, `RetrieveName()`, `RetrieveName(string &n)`, `RetrieveElixir()`, `RetrieveElixir(int &e)`

- **Insertion Functions**  
  `insertFirst()`, `insertAfter()`, `insertBefore()`, `insertEnd()`, `orderInsert()`

- **Deletion Functions**  
  `deleteNode()`, `deleteAtFirst()`, `deleteEnd()`

- **Search / Traversal**  
  `searchById()`, `searchByName()`, `traverse()`

---

create by: Abdallah Rafat Mady.




