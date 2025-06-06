#include "Weathers.h"
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
