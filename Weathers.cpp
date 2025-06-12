#include "Weathers.h"
Weather::Weather(string type, string season) {
    SetType(type);
    SetSeason(season);
}
void Weather::SetType(string type) {
    if (type == "!") {
        cout << "ERROR\n";
    }
    else {
        this->type = type;
    }
}
string Weather::GetType() {
    return type;
}
void Weather::SetSeason(string season) {
    if (season == "+") {
        cout << "ERROR\n";
    }
    else {
        this->season = season;
    }
}
string Weather::GetSeason() {
    return season;
}
void Weather::SetBad(bool bad) {
    if (bad != true && bad != false) {
        cout << "ERROR\n";
    }
    else {
       this-> bad = bad;
    }
}
bool Weather:: GetBad() {
    return bad;
}
void Weather::setName(const char* name) {
    int length = strlen(name) + 1; // +1 for \0
    this->name = new char[length];
    strcpy_s(this->name, length, name);
}
string Weather::getName() const {
    return name;
}
