#include "Parent.h"
void Parents::SetNames(string mom, string dad) {
    if (mom == "." || dad == ".") {
        cout << "ERROR\n";
    }
    else {
       this-> mom = mom;
        this->dad = dad;
    }
}
string Parents::GetNames() {
    return mom, dad;
}
void Parents::SetMood(string mood) {
    if (mood == "-") {
        cout << "ERROR\n";
    }
    else {
       this-> mood = mood;
    }
}
string Parents::GetMood() {
    return mood;
}
