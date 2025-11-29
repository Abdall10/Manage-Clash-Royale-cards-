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

Example Output
Original list of first 10 Clash Royale cards:

--- Clash Royale Cards ---
ID: 9 | Name: Skeletons | Elixir: 1
ID: 5 | Name: Minions | Elixir: 3
ID: 2 | Name: Archers | Elixir: 3
ID: 1 | Name: Knight | Elixir: 3
ID: 6 | Name: Hog Rider | Elixir: 4
ID: 4 | Name: Baby Dragon | Elixir: 4
ID: 10 | Name: Wizard | Elixir: 5
ID: 8 | Name: Balloon | Elixir: 5
ID: 3 | Name: Giant | Elixir: 5
ID: 7 | Name: PEKKA | Elixir: 7
---------------------------

List after adding 5 new cards at the end:

--- Clash Royale Cards ---
ID: 9  | Name: Skeletons     | Elixir: 1
ID: 5  | Name: Minions       | Elixir: 3
ID: 2  | Name: Archers       | Elixir: 3
ID: 1  | Name: Knight        | Elixir: 3
ID: 6  | Name: Hog Rider     | Elixir: 4
ID: 4  | Name: Baby Dragon   | Elixir: 4
ID: 10 | Name: Wizard        | Elixir: 5
ID: 8  | Name: Balloon       | Elixir: 5
ID: 3  | Name: Giant         | Elixir: 5
ID: 7  | Name: PEKKA         | Elixir: 7
ID: 11 | Name: Valkyrie      | Elixir: 4
ID: 12 | Name: Musketeer     | Elixir: 4
ID: 13 | Name: Mini P.E.K.K.A | Elixir: 4
ID: 14 | Name: Fire Spirits  | Elixir: 2
ID: 15 | Name: Goblin Gang   | Elixir: 3
---------------------------

Found card 'Giant'. Elixir cost: 5
Total number of cards: 15

Notes

The project uses a singly linked list to store cards.

Cards can be added in order or appended at the end.

Searching is by name or ID, returning the card's Elixir cost.

Created by Abdallah Raafat Mady
