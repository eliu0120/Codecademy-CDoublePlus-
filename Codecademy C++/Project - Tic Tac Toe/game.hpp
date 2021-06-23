#include <iostream>
#include <string>
using namespace std;

class Game {
    public:
        // variables
        static bool isPlaying;
        static bool winCheck;
        static string board[5];

        // functions
        static void intro();
        static void resetBoard();
        static void printBoard();
        static void player1Turn();
        static void player2Turn();
        static void checkBoard();
        static void playAgain();
};