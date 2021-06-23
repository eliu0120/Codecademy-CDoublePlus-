#include <iostream>
using namespace std;

int main() {
    // initialize all variables
    int dog_age, early_years, later_years, human_years;

    // ask user for age of dog
    cout << "Please input age of dog: ";
    cin >> dog_age;

    // first two years of dog life count as 21 human years
    early_years = 20;

    // each following dog years will count as 4 human years
    later_years = (dog_age - 2) * 4;

    // total human years = early years + later years
    if (dog_age == 0) 
        human_years = 0;        
    else if (dog_age == 1)
        human_years = 10;
    else
        human_years = early_years + later_years;

    // display dog age
    cout << "My name is (I don't actually exist lmao)! Ruff Ruff, I am " << human_years << " years old in human years.\n";
}