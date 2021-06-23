#include <iostream>
#include <string>
#include "functions.hpp"
using namespace std;

void Function::bleep(string &word, string &text) {
    for (int i = 0; i < text.size() - word.size() + 1; i++)
        if (text.substr(i, word.size()).compare(word) == 0) {
            string newText = text.substr(0, i);
            for (int j = 0; j < word.size(); j++)
                newText.append("*");
            newText.append(text.substr(i + word.size()));
            text = newText;
        }
}