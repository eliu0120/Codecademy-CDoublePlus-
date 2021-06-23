#include <iostream>
#include <string>
#include "game.hpp"
using namespace std;

int main() {
    // initialize variables
    char response1;

    // title screen
    cout << "Tic-Tac-Toe!\n\nPlay? (Y/N)\n\n";
    cin >> response1;
    if (response1 != 'Y')
        Game::isPlaying = false;
    
    // game
    while (Game::isPlaying) {
        Game::intro(); // Introduce player to game
        Game::resetBoard(); // Creates clean board for tic-tac-toe

        // Execute turn
        while (!Game::winCheck) {
            Game::printBoard();
            Game::checkBoard(); 
            if (Game::winCheck)
                break;
            Game::player1Turn();
            Game::printBoard();
            Game::checkBoard();
            if (Game::winCheck)
                break;
           Game::player2Turn();           
        }

        Game::playAgain(); // allows player to play again
    }

    return 0;
}