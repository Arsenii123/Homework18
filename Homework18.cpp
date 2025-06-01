// Homework18.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>Add commentMore actions
using namespace std;
class Flower {
public:
    bool real;
    int count;
    string color;
    void Water() {
        if (real == true) {
            cout << "We need to water\n";
        }
        else {
            cout << "We dont need to water\n";
        }
    }
    void Number() {
        cout << count << " flowers\n";
    }
    void Color() {
        cout << "Flowers are " << color << "\n";
    }
};
class Weather {
public:
    string type;
    string season;
    bool bad;
    void Type() {
        cout << "It's " << type << " outside\n";
    }
    void Season() {
        cout << "This weatrher is " << season << " \n";
    }
    void Outside() {
        if (bad == true) {
            cout << "Weather is bad\n";
        }
        else {
            cout << "Weather is good\n";
        }
    }
};
class Parents {
public:
    string mood;
    string mom;
    string dad;
    void Names() {
        cout << "My mum name is " << mom << " and my dad name is " << dad << "\n";
    }
    void Mood() {
        cout << "Today parents are " << mood << "\n";
    }
};
class Marks {
public:
    double mark;
    void Grade() {
        if (mark >= 9.5) {
            cout << "Good job!\n";
        }
        else if (mark >= 7.5 && mark < 9.5) {
            cout << "Not bad\n";
        }
        else {
            cout << "Bad...\n";
        }
    }
};
class Me {
public:
    string name;
    bool male;
    int age;
    void My_name() {
        cout << "Your name is  " << name << "\n";
    }
    void Age() {
        cout << "You're  " << age << " years old\n";
    }
    void Male() {
        if (male == true) {
            cout << "You are male\n";
        }
        else {
            cout << "You are female\n";
        }
    }
};
int main()
{
    Flower flower;
    flower.real = false;
    flower.color = "white";
    flower.count = 10;
    flower.Number();
    flower.Color();
    flower.Water();
    Weather weather;
    weather.type = "raining";
    weather.season = "spring";
    weather.bad = true;
    weather.Type();
    weather.Season();
    weather.Outside();
    Parents parents;
    parents.dad = "Ruslan";
    parents.mom = "Lida";
    parents.mood = "happy";
    parents.Names();
    parents.Mood();
    Me person;
    person.name = "Arsenii";
    person.age = 14;
    person.male = true;
    person.My_name();
    person.Age();
    person.Male();
    Marks grades;
    grades.mark = 11.5;
    grades.Grade();

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
