#include <iostream>
#include <cmath>
using namespace std;

int main () {
    // declare three variables
    double a, b, c;

    // ask user for input a
    cout << "ax^2 + bx + c\nInput number for a: ";
    cin >> a;

    // ask user for input b
    cout << "Input number for b: ";
    cin >> b;

    // ask user for input c
    cout << "Input number for c: ";
    cin >> c;

    // Display equation
    cout << a << "x^2 + " << b << "x + " << c << "\n";

    // declare root numbers
    double root1, root2;

    // calculate roots
    root1 = (-1 * b + sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
    root2 = (-1 * b - sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);

    // display roots
    cout << "Root 1 is: " << root1 << "\nRoot 2 is: " << root2 << "\n";
}