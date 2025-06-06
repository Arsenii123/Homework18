#include "Person.h"
void Me::SetName(string name) {
    if (name == ")") {
        cout << "ERROR\n";
    }
    else {
        this->name = name;
    }
}
string Me::GetName() {
    return name;
}
void Me::SetMale(bool male) {
    if (male != true && male != false) {
        cout << "ERROR\n";
    }
    else {
        this->male = male;
    }
}
bool Me:: GetMale() {
    return male;
}
void Me::SetAge(int age) {
    if (age < 0 || age>100) {
        cout << "ERROR\n";
    }
    else {
       this-> age = age;
    }
}
int Me:: GetAge() {
    return age;
}
