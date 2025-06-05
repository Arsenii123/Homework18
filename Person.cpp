#include "Person.h"
void Me::SetName(string new_name) {
    if (new_name == ")") {
        cout << "ERROR\n";
    }
    else {
        name = new_name;
    }
}
string Me::GetName() {
    return name;
}
void Me::SetMale(bool new_male) {
    if (new_male != true && new_male != false) {
        cout << "ERROR\n";
    }
    else {
        male = new_male;
    }
}
bool Me:: GetMale() {
    return male;
}
void Me::SetAge(int new_age) {
    if (new_age < 0 || new_age>100) {
        cout << "ERROR\n";
    }
    else {
        age = new_age;
    }
}
int Me:: GetAge() {
    return age;
}
