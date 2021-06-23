#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

int main() {
    // Ask user to input fortune
    cout << "MAGIC 8-BALL\nPlease ask your question\n";

    string fortune;
    getline(cin, fortune);

    // Intialize answer
    srand(time(0));
    int answer = rand() % 10;

    // Output fortune
    cout << answer << "\n";
    if (answer == 0)
        cout << "It is certain.\n";
    else if (answer == 1)
        cout << "Most likely.\n";
    else if (answer == 2)
        cout << "Yes.\n";
    else if (answer == 3)
        cout << "Better not tell you now.\n";
    else if (answer == 4)
        cout << "Cannot predict now.\n";
    else if (answer == 5)
        cout << "No.\n";
    else if (answer == 6)
        cout << "Outlook not so good\n";
    else if (answer == 7)
        cout << "Outlook good.\n";
    else if (answer == 8)
        cout << "Reply hazy, try again\n";
    else if (answer == 9)
        cout << "Concentrate and ask again\n";
    else if (answer == 10)
        cout << "Very doubtful.\n";
}