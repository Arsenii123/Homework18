#include "Parent.h"
void Parents::SetNames(string new_mom, string new_dad) {
    if (new_mom == "." || new_dad == ".") {
        cout << "ERROR\n";
    }
    else {
        mom = new_mom;
        dad = new_dad;
    }
}
string Parents::GetNames() {
    return mom, dad;
}
void Parents::SetMood(string new_mood) {
    if (new_mood == "-") {
        cout << "ERROR\n";
    }
    else {
        mood = new_mood;
    }
}
string Parents::GetMood() {
    return mood;
}
