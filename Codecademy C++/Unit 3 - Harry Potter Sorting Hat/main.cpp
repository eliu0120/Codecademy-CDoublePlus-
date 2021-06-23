#include <iostream>
#include <string>
using namespace std;

int main() {
    // Declare variables
    int gryffindor, hufflepuff, ravenclaw, slytherin, answer1, answer2, answer3, answer4, max;

    // Ask Q1
    cout << "\nQ1: When I'm dead, I want people to remember me as: \n\n1) The Good\n2) The Great\n3) The Wise\n4) The Bold\n\n";
    cin >> answer1;
    switch (answer1) {
        case 1: 
            hufflepuff++;
            break;
        case 2: 
            slytherin++;
            break;
        case 3:
            ravenclaw++;
            break;
        case 4:
            gryffindor++;
            break;
        default:
            cout << "Invalid output";
            break;
    }
    
    // Ask Q2
    cout << "\nQ2: Dawn or dusk?\n\n1) Dawn\n2) Dusk\n\n";
    cin >> answer2;
    switch (answer2) {
        case 1:
            gryffindor++;
            ravenclaw++;
            break;
        case 2:
            hufflepuff++;
            slytherin++;
            break;
        default:
            cout << "Invalid output";
            break;
    }

    // Ask Q3
    cout << "\nQ3: Which kind of instrument most pleases your ear?\n\n1) The violin\n2) The trumput\n3) The piano\n4) The drum\n\n";
    cin >> answer3;
    switch (answer3) {
        case 1:
            slytherin++;
            break;
        case 2:
            hufflepuff++;
            break;
        case 3:
            ravenclaw++;
            break;
        case 4:
            gryffindor++;
            break;
        default:
            cout << "Invalid output";
            break;
    }

    // Ask Q4
    cout << "\nQ4: Which road tempts you most?\n\n1) The wide, sunny grass lane\n2) The narrow, dark, lantern-lit alley\n3) The twisting, leaf strewn path through woods\n4) The cobbled street lined (ancient buildings)\n\n";
    cin >> answer4;
    switch (answer4) {
        case 1:
            hufflepuff++;
            break;
        case 2:
            slytherin++;
            break;
        case 3:
            gryffindor++;
            break;
        case 4:
            ravenclaw++;
            break;
        default:
            cout << "Invalid output";
            break;
    }

    // Display string
    string house;
    
    if (gryffindor > max) {
        max = gryffindor;
        house = "Gryffindor"; 
    }
    if (hufflepuff > max) {
        max = hufflepuff;
        house = "Hufflepuff"; 
    }
    if (ravenclaw > max) {
        max = ravenclaw;
        house = "Ravenclaw"; 
    }
    if (slytherin > max) {
        max = slytherin;
        house = "Slytherin"; 
    }

    cout << "\n" << house << "!\n";
}