#include <iostream>
using namespace std;

int main() {
    // Declare variables
    double pesos, reais, soles, dollars;

    // Ask user for inputs
    cout << "Input amount of pesos: ";
    cin >> pesos;
    cout << "Input amount of reais: ";
    cin >> reais;
    cout << "Input amount of soles: ";
    cin >> soles;

    // Calculate USD value - 1 peso = 0.05 usd; 1 reais = 0.20 usd; 1 sol = 0.26 usd
    dollars = 0.05 * pesos + 0.20 * reais + 0.26 * soles;

    // display dollar value
    cout << "US Dollars = $" << dollars << "\n";
}