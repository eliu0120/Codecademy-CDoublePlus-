#include <iostream>
#include <string>
#include <vector>
#include "profile.hpp"
using namespace std;

Profile::Profile() {
    name;
    age;
    city;
    country;
    hobbies;
    pronouns = "they/them";
}

Profile::Profile(string n, int a, string c, string cy, string p) {
    name = n;
    age = a;
    city = c;
    country = cy;
    hobbies;
    pronouns = p;
}

string Profile::view_profile() {
    string bio = name + ", ";
    bio += to_string(age) + ", ";
    bio += city + ", ";
    bio += country + ", ";
    for (int i = 0; i < hobbies.size(); i++)
        bio += hobbies[i] + ", ";
    bio += pronouns + "\n";
    return bio;
}

void Profile::add_hobby(string new_hobby) {
    hobbies.push_back(new_hobby);
}