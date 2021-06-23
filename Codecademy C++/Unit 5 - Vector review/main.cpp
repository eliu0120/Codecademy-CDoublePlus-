#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Ask user to create array
    vector<int> array(6);
    for (int i = 0; i < array.size(); i++) {
        cout << "Input number " << i + 1 << ": ";
        cin >> array[i];
    }
    cout << "\nYour array is: [";
    for (int i = 0; i < array.size(); i++) {
        cout << " " << array[i];
        if (i < array.size() - 1)
            cout << ",";
    }
    cout << " ]\n";

    // Find sum of even numbers, and product of odd numbers
    int sum = 0, product = 0;
    for (int i = 0; i < array.size(); i++) {
        if (array[i] % 2 == 0) 
            sum += array[i];
        else {
            if (product == 0)
                product++;
            product *= array[i];
        }
    }
    cout << "\nSum of even numbers in array is: " << sum << "\nProduct of odd numbers in array is: " << product;
    return 0;
}