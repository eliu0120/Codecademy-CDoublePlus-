#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    // Ask user for string
    string s;
    cout << "Please input string:\n";
    getline(cin, s);

    // Whale talk
    vector<char> vowels = {'a', 'e', 'i', 'o', 'u'};
    vector<char> result;

    // Converting human string to whale talk
    for (int i = 0; i < s.size(); i++) {
        for (int j = 0; j < vowels.size(); j++) 
            if (s[i] == vowels[j])
                result.push_back(s[i]);
        if (s[i] == 'e' || s[i] == 'u')
            result.push_back(s[i]);
    }
    cout << "\n";
    for (int i = 0; i < result.size(); i++)
        cout << result[i];
}