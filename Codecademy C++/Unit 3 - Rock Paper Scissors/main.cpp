#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    // computer picks random number
    srand(time(NULL));
    int computer = rand() % 3 + 1;
    int user;

    // prompt user to pick rock, paper, or scissors
    cout << "Rock, Paper, Scissors!\n1) Rock\n2) Paper\n3) Scissors\nShoot!\n\n";
    cin >> user;
    if ((user != 1) && (user != 2) && (user != 3)) {
        cout << "\n\nFOLLOW THE RULES IDIOT!";
        return 0;
    }

    // determine winner
    if (user == computer)
        cout << "\n\nTie!\n";
    else if ((user == 1 && computer == 2) || (user == 2 && computer == 3) || (user == 3 && computer == 1))
        cout << "\n\nYou lose!\n";    
    else
        cout << "\n\nYou win!\n";

    return 0;
}