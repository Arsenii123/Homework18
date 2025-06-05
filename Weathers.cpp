#include "Weathers.h"
void Weather::SetType(string new_type) {
    if (new_type == "!") {
        cout << "ERROR\n";
    }
    else {
        type = new_type;
    }
}
string Weather::GetType() {
    return type;
}
void Weather::SetSeason(string new_season) {
    if (new_season == "+") {
        cout << "ERROR\n";
    }
    else {
        season = new_season;
    }
}
string Weather::GetSeason() {
    return season;
}
void Weather::SetBad(bool new_bad) {
    if (new_bad != true && new_bad != false) {
        cout << "ERROR\n";
    }
    else {
        bad = new_bad;
    }
}
bool Weather:: GetBad() {
    return bad;
}
