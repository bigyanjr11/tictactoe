# ❌⭕ Console Tic-Tac-Toe

A classic, two-player implementation of Tic-Tac-Toe built entirely in C++. This project demonstrates the practical application of 2D Arrays, Coordinate Mapping, and Game Loop Logic.

🎮 How to Play

The game is played on a 3x3 grid.

> Player 1 is X and Player 2 is O.

Players take turns entering a slot number (1-9) to place their mark.

The first player to get 3 marks in a row (horizontally, vertically, or diagonally) wins.

If all 9 slots are filled without a winner, the game ends in a Draw.

🚀 Features

Visual Game Board: A clean, ASCII-based grid that updates after every move.

Smart Input Mapping: Converts user input (1-9) into 2D array coordinates [row][col].

Move Validation: Prevents players from overwriting an existing move.

Win Detection: Automatically scans rows, columns, and diagonals for a victory condition.

Draw Logic: Detects when the board is full with no winner.

🛠️ Technical Concepts Used

Language: C++

Data Structure: char board[3][3] (2D Array) used as the game state.

Algorithms: - Linear Mapping: converting a single integer (1-9) to Matrix indices (row, col).

Win Checking: Boolean logic to verify 8 possible winning conditions.

Control Flow: while loops for the game engine and if/else for turn switching.

💻 How to Run

Clone the repository:

git clone [https://github.com/](https://github.com/)<YOUR-USERNAME>/console-tic-tac-toe.git


Compile the code:

g++ main.cpp -o tictactoe


Run the game:

Windows: tictactoe.exe

Mac/Linux: ./tictactoe

🔮 Future Improvements

[ ] Single Player Mode: Implement a basic AI opponent using rand().

[ ] Replay Feature: Allow users to restart the game without closing the console.

[ ] Scoreboard: Track wins for Player X and Player O across multiple rounds.

Built as part of an Advanced C++ Logic Building Roadmap.
