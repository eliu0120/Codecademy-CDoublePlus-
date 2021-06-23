#include <iostream>
using namespace std;

class gameOver {
    public:
        // game run check
        static int run;

        // game over condition
        static void retry() {
            int goChoice;
            cout << "\n\nGame Over!\nTry again?\n1) Yes\n2) No\n\n";
            cin >> goChoice;
            if (goChoice == 2)
                run = 1;
            else if (goChoice != 1) {
                cout << "Error";
                run = 1;                
            }
            cout << "\n";
        } 

        // win condition
        static void playAgain() {
            int paChoice;
            cout << "\n\nPlay again?\n1) Yes\n2) No\n\n";
            cin >> paChoice;
            if (paChoice == 2)
                run = 1;
            else if (paChoice != 1) {
                cout << "Error";
                run = 1;
            }
            cout << "\n";
        }  
};

// Declare game running variable
int gameOver::run = 0;

int main() {
    // Declare choice variables
    int choice0, choice1, choice2r, choice2f;

    // Introduce player to game
    cout << "Wyvern Quest!\n\n1) Play\n2) Quit\n\n";
    cin >> choice0;
    if (choice0 == 2)
        return 0;
    else if (choice0 != 1) {
        cout << "Error";
        return 0;       
    }

    while (gameOver::run == 0) {
        // Give player first choice
        cout << "\nOh no! Your castle is being attacked!\nWhat do you do?\n1) Run\n2) Search for gear\n\n";
        cin >> choice1;
        if ((choice1 != 1) && (choice1 != 2)) {
            cout << "Error";
            return 0;

        // Give player run scenario choice
        } else if (choice1 == 1) {
            cout << "\nYou ran away from the castle! Where do you go?\n1) Nearby town\n2) Cave\n\n";
            cin >> choice2r;
            if (choice2r == 1) {
                cout << "\nOh no, you got surrounded by enemy knights! Your are being captured!";
                gameOver::retry();
            } else if (choice2r == 2) {
                cout << "\nChicken ending: You reach the cave and live the rest of your life their. The world will forever know you as a coward who ran from danger.";
                gameOver::playAgain();
            } else {
                cout << "Error";
                return 0;
            }

        // Give player fight scenario choice
        } else {
            cout << "\nYou found a sword! However, an evil dragon appeared! Initiate battle!\n\nYour health: 5\nYour mp: 5\nDragon health: 50\nDragon mp: 200\n\n1) Attack\n2) Magic\n3) Charm\n4) Flee\n\n";
            cin >> choice2f;
            if (choice2f == 1) {
                cout << "\nCritical hit! 100 damage!\nDragon defeated!\n\nTriumphant ending: By killing the dragon, the enemy army disappeared. You saved your kingdom!";
                gameOver::playAgain();
            } else if (choice2f == 2) {
                cout << "\nNot enough mp!\nDragon used fire breath!\n1337 damage!\nThe player has been defeated!";
                gameOver::retry();
            } else if (choice2f == 3) {
                cout << "\nYou charmed the dragon!\nS-support with dragon achieved!\n\n😳 ending: You married the dragon 😳😳😳😳😳. JRPG plot moment";
                gameOver::playAgain();
            } else if (choice2f == 4) {
                cout << "\nFailed to escape!\nDragon used stomp!\n666 damage!\nThe player has been defeated!";
                gameOver::retry();
            }
        }        
    }
    return 0;
}