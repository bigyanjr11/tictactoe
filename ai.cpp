#include <iostream>
using namespace std;

char board[3][3] ={{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};

void drawBoard(){
    cout << "\n";
    cout << "       |       |       "<< endl;
    cout << "   " << board[0][0] << "   " << "|" << "   " << board[0][1] << "   " << "|" << "   " << board[0][2] << "   " << endl;
    cout << "_______|_______|_______" <<endl;
    cout << "       |       |       "<< endl;
    cout << "   " << board[1][0] << "   " << "|" << "   " << board[1][1] << "   " << "|" << "   " << board[1][2] << "   " << endl;
    cout << "_______|_______|_______" <<endl;
    cout << "       |       |       "<< endl;
    cout << "   " << board[2][0] << "   " << "|" << "   " << board[2][1] << "   " << "|" << "   " << board[2][2] << "   " << endl;
    cout << "       |       |       " <<endl;
}
bool checkWin() {
    // 1. Check Rows
    for(int i = 0; i < 3; i++) {
        if(board[i][0] == board[i][1] && board[i][1] == board[i][2])
            return true;
    }
    // 2. Check Columns
    for(int i = 0; i < 3; i++) {
        if(board[0][i] == board[1][i] && board[1][i] == board[2][i])
            return true;
    }
    // 3. Check Diagonals
    if(board[0][0] == board[1][1] && board[1][1] == board[2][2])
        return true;
    if(board[0][2] == board[1][1] && board[1][1] == board[2][0])
        return true;

    return false;
}
int main(){
    char turn = '';
    int slot;
    int row, col;
    int moves = 0;

    // Game Loop
    while(moves < 9){
        cout << "=== TIC TAC TOE ===\n";
        drawBoard();
        cout << "Player " << turn << ", enter a slot: ";
        cin >> slot;

        // Convert slot to array indices
        row = (slot-1) / 3;
        col = (slot-1) % 3;

        // Validation: Don't overwrite an existing move!
        if(board[row][col] != 'X' && board[row][col] != 'O') {
            board[row][col] = turn;
            
            // --- THE WIN CHECKER ---
            if(checkWin()) {
                drawBoard(); // Show the final winning state
                cout << "\n!!! CONGRATULATIONS! Player " << turn << " wins! !!!\n";
                break; // Stop the game
            }
            
            // Switch Turn Logic
            if(turn == 'X'){
                turn = 'O';
            } else {
                turn = 'X';
            }
            moves++; // Only count the move if it was valid!
        } else {
            cout << "Slot already taken! Try again.\n";
            // Do NOT increment moves, let them try again.
        }
    }

    // Checking for Draw
    if(moves == 9 && !checkWin()) {
        drawBoard();
        cout << "\nIt's a Draw!\n";
    }

    return 0;
}