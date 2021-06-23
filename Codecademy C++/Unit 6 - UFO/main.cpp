#include <iostream>
#include <string>
#include <vector>
#include "ufo_functions.hpp"
using namespace std;

int main() {
    bool isPlaying = true;

    while (isPlaying == true) {
        // greet player
        greet();

        // variables for game
        string codeword = "codecademy";
        string answer = "__________";
        string response;
        int misses = 0;
        vector<char> incorrect;
        bool guess = false;
        char letter;

        // keep game running
        while (answer != codeword && misses < 7) {
            display_misses(misses);
            display_status(incorrect, answer);
            cout << "\nPlease enter your guess: ";
            cin >> letter;
            for (int i = 0; i < codeword.size(); i++)
                if (letter == codeword[i]) {
                    answer[i] = letter;
                    guess = true;                
                }
            if (guess == true)
                cout << "Correct!\n";
            else {
                cout << "Incorrect! The tractor beam pulls the person in further.\n";
                incorrect.push_back(letter);
                misses++;
            }
            guess = false;
        }

        end_game(answer, codeword);

        cout << "Play again? (Y/N)\n";
        cin >> response;
        isPlaying = continuePlaying(response);
    }
}