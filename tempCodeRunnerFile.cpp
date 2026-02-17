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

int main(){
    char turn = 'X';
    int slot;
    int row, col;
    int moves = 0;
    while(moves < 9){
    cout << "===WELCOME TO TIC TAC TOE===\n";
    drawBoard();
    cout << "Player " << turn << ", enter a slot: ";
    cin >> slot;
    row = (slot-1) /3;
    col = (slot-1) % 3;
    board[row][col] = turn;
    if(turn == 'X'){
        turn = 'O';
    } else {
        turn = 'X';
    }
    moves++;
    }

    return 0;
}