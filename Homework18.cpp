// Homework18.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Flowers.h"
#include "Weathers.h"
#include "Person.h"
#include "Parent.h"
#include "Mark.h"
using namespace std;
int main()
{
    Flower flower(1,12,"blue");
    //flower.SetColor("blue");
    //flower.SetCount(12);
    //flower.SetReal(3);
    cout << flower.GetReal() << "\n";
    cout << flower.GetCount() << "\n";
    cout << flower.GetColor() << "\n";
    Weather weather("-","Summer");
   /* weather.SetType("-");*/
    cout << weather.GetType() << "\n";
  /*  weather.SetSeason("Summer");*/
    cout << weather.GetSeason() << "\n";
    weather.SetBad(true);
    cout << weather.GetBad() << "\n";

    Parents parents("Angry","-","?");
    //parents.SetMood("-");
    //parents.SetNames("Jessica", "David");
    cout << parents.GetNames() << "\n";
    cout << parents.GetMood() << "\n";
    Me person("Arsenii",true,14);
    //person.SetAge(1200);
    //person.SetMale(6);
    //person.SetName("Senya");
    cout << person.GetAge() << "\n";
    cout << person.GetMale() << "\n";
    cout << person.GetName() << "\n";
    Marks grades(1.5);
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
