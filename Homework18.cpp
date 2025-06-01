// Homework18.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
class Flower {
private:
    bool real;
    int count;
    string color;
public:
    void SetCount(int new_count) {
        if (new_count < 0) {
            cout << "ERROR\n";
        }
        else {
            count = new_count;
        }
    }
    int  GetCount() {
        return count;
    }
    void SetColor(string new_color) {
        if (new_color == "*") {
            cout << "ERROR\n";
        }
        else {
            color = new_color;
        }
    }
    string  GetColor() {
        return color;
    }
    void SetReal(bool new_real) {
        if (real != true) {
            cout << "ERROR\n";
        }
        else {
            real = new_real;
        }
    }
    bool  GetReal() {
        return real;
    }

    //void Water() {
    //    if (real == true) {
    //        cout << "We need to water\n";
    //    }
    //    else {
    //        cout << "We dont need to water\n";
    //    }
    //}
    //void Number() {
    //    cout << count << " flowers\n";
    //}
    //void Color() {
    //    cout << "Flowers are " << color<<"\n";
    //}

};
class Weather {
private:
    string type;
    string season;
    bool bad;
public:
    //void Type() {
    //    cout << "It's " << type << " outside\n";
    //}
    //void Season() {
    //    cout << "This weatrher is " << season << " \n";
    //}
    //void Outside() {
    //    if (bad == true) {
    //        cout << "Weather is bad\n";
    //    }
    //    else {
    //        cout << "Weather is good\n";
    //    }
    //}
    void SetType(string new_type) {
        if (new_type == "!") {
            cout << "ERROR\n";
        }
        else {
            type = new_type;
        }
    }
    string GetType() {
        return type;
    }
    void SetSeason(string new_season) {
        if (new_season == "+") {
            cout << "ERROR\n";
        }
        else {
            season = new_season;
        }
    }
    string GetSeason() {
        return season;
    }
    void SetBad(bool new_bad) {
        if (new_bad != true && new_bad != false) {
            cout << "ERROR\n";
        }
        else {
            bad = new_bad;
        }
    }
    bool  GetBad() {
        return bad;
    }

};
class Parents {
private:
    string mood;
    string mom;
    string dad;
public:
    void SetNames(string new_mom, string new_dad) {
        if (new_mom == "." || new_dad == ".") {
            cout << "ERROR\n";
        }
        else {
            mom = new_mom;
            dad = new_dad;
        }
    }
    string GetNames() {
        return mom, dad;
    }
    void SetMood(string new_mood) {
        if (new_mood == "-") {
            cout << "ERROR\n";
        }
        else {
            mood = new_mood;
        }
    }
    string GetMood() {
        return mood;
    }
    //void Names() {
    //    cout << "My mum name is " << mom << " and my dad name is " << dad << "\n";
    //}
    //void Mood() {
    //    cout << "Today parents are " << mood << "\n";
    //}
};
class Marks {
private:
    double mark;
public:
    void SetMark(double new_mark) {
        if (new_mark < 1) {
            cout << "ERROR\n";
        }
        else {
            mark = new_mark;
        }
    }
    double  GetMark() {
        return mark;
    }
    //void Grade() {
    //    if (mark >= 9.5) {
    //        cout << "Good job!\n";
    //    }
    //    else if (mark >= 7.5 && mark < 9.5) {
    //        cout << "Not bad\n";
    //    }
    //    else {
    //        cout << "Bad...\n";
    //    }
    //}
};
class Me {
private:
    string name;
    bool male;
    int age;
public:
    void SetName(string new_name) {
        if (new_name == ")") {
            cout << "ERROR\n";
        }
        else {
            name = new_name;
        }
    }
    string GetName() {
        return name;
    }
    void SetMale(bool new_male) {
        if (new_male != true && new_male != false) {
            cout << "ERROR\n";
        }
        else {
            male = new_male;
        }
    }
    bool  GetMale() {
        return male;
    }
    void SetAge(int new_age) {
        if (new_age < 0 || new_age>100) {
            cout << "ERROR\n";
        }
        else {
            age = new_age;
        }
    }
    int  GetAge() {
        return age;
    }
    //void My_name() {
    //    cout << "Your name is  " << name << "\n";
    //}
    //void Age() {
    //    cout << "You're  " << age << " years old\n";
    //}
    //void Male() {
    //    if (male == true) {
    //        cout << "You are male\n";
    //    }
    //    else {
    //        cout << "You are female\n";
    //    }
    //}

};
int main()
{
    Flower flower;
    //flower.real = false;
    //flower.color = "white";
    //flower.count = 10;
    //flower.Number();
    //flower.Color();
    //flower.Water();
    flower.SetCount(12);
    cout << flower.GetCount() << "\n";
    flower.SetColor("blue");
    cout << flower.GetColor() << "\n";
    flower.SetReal(3);
    cout << flower.GetReal() << "\n";
    Weather weather;
    //weather.type = "raining";
    //weather.season = "spring";
    //weather.bad = true;
    //weather.Type();
    //weather.Season();
    //weather.Outside();
    weather.SetType("-");
    cout << weather.GetType() << "\n";
    weather.SetSeason("Summer");
    cout << weather.GetSeason() << "\n";
    weather.SetBad(true);
    cout << weather.GetBad() << "\n";

    Parents parents;
    //parents.dad = "Ruslan";
    //parents.mom = "Lida";
    //parents.mood = "happy";
    //parents.Names();
    //parents.Mood();
    parents.SetMood("-");
    parents.SetNames("Jessica", "David");
    cout << parents.GetNames() << "\n";
    cout << parents.GetMood() << "\n";
    Me person;
    //person.name = "Arsenii";
    //person.age = 14;
    //person.male = true;
    //person.My_name();
    //person.Age();
    //person.Male();
    person.SetAge(1200);
    person.SetMale(6);
    person.SetName("Senya");
    cout << person.GetAge() << "\n";
    cout << person.GetMale() << "\n";
    cout << person.GetName() << "\n";
    Marks grades;
    //grades.mark = 11.5;
    //grades.Grade();
    grades.SetMark(1);
    cout << grades.GetMark() << "\n";

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
