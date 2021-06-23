#include <iostream>
#include <string>
#include <vector>
#include "profile.hpp"
using namespace std;

int main() {
    Profile Sam("Sam Drakkila", 30, "New York", "USA", "he/him");
    Sam.add_hobby("listening to audiobooks and podcasts");
    Sam.add_hobby("playing rec sports like bowling and kickball");
    Sam.add_hobby("writing a speculative fiction novel");
    Sam.add_hobby("reading advice columns");
    cout << Sam.view_profile();
}