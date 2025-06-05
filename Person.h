#include <iostream>
using namespace std;
class Me {
private:
    string name;
    bool male;
    int age=0;
public:
    void SetName(string new_name);
    string GetName();
    void SetMale(bool new_male);
    bool  GetMale();
    void SetAge(int new_age);
    int  GetAge();

};

