#include <iostream>
#include <string>
#include "game.hpp"
using namespace std;

bool Game::isPlaying = true;
bool Game::winCheck = false;
string Game::board[] = {" | | ", "- - -", " | | ", " - - -", " | | "};

// Gives player directions
void Game::intro() {
    char response;
    cout << "\nX: Player 1; O: Player 2\nFirst input row - 0 is top, 1 is center, 2 is bottom\nInput column next - 0 is left, 1 is center, 2 is right\nFailing to follow rules = turn skipped!\nInput any key to continue\n\n";
    cin >> response;
}

// Resets board
void Game::resetBoard() {
    board[0] = " | | ";
    board[2] = " | | ";
    board[4] = " | | ";
    Game::winCheck = false;
}

// Print board
void Game::printBoard() {
    for (int i = 0; i < 5; i++)
        cout << "\n" << Game::board[i] << "\n";
}

// Player 1 turn
void Game::player1Turn() {
    int response1 = 0, response2 = 0;
    cout << "\nPlayer 1 input row: ";
    cin >> response1;
    cout << "Player 1 input column: ";
    cin >> response2;
    if ((response1 != 0 && response1 != 1 && response1 != 2) || (response2 != 0 && response2 != 1 && response2 != 2))
        cout << "\nError, turn skipped\n";
    else {
        response1 *= 2;
        response2 *= 2;
        if (Game::board[response1][response2] != ' ')
            cout << "\nSpace already occupied, turn skipped\n";
        else
            board[response1][response2] = 'X';
    }
}

// Player 2 turn
void Game::player2Turn() {
    int response1 = 0, response2 = 0;
    cout << "\nPlayer 2 input row: ";
    cin >> response1;
    cout << "Player 2 input column: ";
    cin >> response2;
    if ((response1 != 0 && response1 != 1 && response1 != 2) || (response2 != 0 && response2 != 1 && response2 != 2))
        cout << "\nError, turn skipped\n";
    else {
        response1 *= 2;
        response2 *= 2;
        if (Game::board[response1][response2] != ' ')
            cout << "\nSpace already occupied, turn skipped\n";
        else
            board[response1][response2] = 'O';
    }
}

// check if any player has winning combo
void Game::checkBoard() {
    // Check for diagonals
    if ((Game::board[0][0] == Game::board[2][2] && Game::board[2][2] == Game::board[4][4] && Game::board[0][0] != ' ') || (Game::board[0][4] == Game::board[2][2] && Game::board[2][2] == Game::board[4][0] && Game::board[0][4] != ' '))
        if (Game::board[0][0] == 'X' || Game::board[0][4] == 'X') {
            cout << "\nPlayer 1 wins!\n";
            Game::winCheck = true;
        } else if (Game::board[0][0] == 'O' || Game::board[0][4] == 'O') {
            cout << "\nPlayer 2 wins!\n";
            Game::winCheck = true;
        }

    // Check for horizontals or verticals
    for (int x = 0; x < 5; x += 2) {
        if ((Game::board[x][0] == Game::board[x][2] && Game::board[x][2] == Game::board[x][4] && Game::board[x][0] != ' ') || (Game::board[0][x] == Game::board[2][x] && Game::board[2][x] == Game::board[4][x] && Game::board[0][x] != ' '))
            if (Game::board[x][0] == 'X' || Game::board[0][x] == 'X') {
                cout << "\nPlayer 1 wins!\n";
                Game::winCheck = true;
            } else if (Game::board[x][0] == 'O' || Game::board[0][x] == 'O') {
                cout << "\nPlayer 2 wins!\n";
                Game::winCheck = true;
            }
    }

    // Check if board is full
    bool isFull = true;
    for (int i = 0; i < 5; i += 2)
        for (int j = 0; j < 5; j += 2)
            if (Game::board[i][j] == ' ')
                isFull = false;
    if (isFull) {
        cout << "\nTie!\n";
        Game::winCheck = true;
    }
}

// Ask player if he/she wants to play again
void Game::playAgain() {
    char response;
    cout << "\nWould you like to play again? (Y/N)\n";
    cin >> response;
    if (response != 'Y')
        Game::isPlaying = false;
}