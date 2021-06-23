#include <iostream>
#include <string>
#include "functions.hpp"
using namespace std;

int main() {
    string word, text;
    getline(cin, word);
    getline(cin, text);
    Function::bleep(word, text);
    cout << text << "\n";
    return 1;
}