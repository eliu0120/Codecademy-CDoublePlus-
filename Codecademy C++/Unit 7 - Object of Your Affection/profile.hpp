#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Profile {
    private:
        // attributes
        string name;
        int age;
        string city;
        string country;
        string pronouns;
        vector<string> hobbies;

    public:
        // constructors
        Profile();
        Profile(string n, int a, string c, string cy, string p = "they/them");

        // functions
        string view_profile();
        void add_hobby(string new_hobby);
};