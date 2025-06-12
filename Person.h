#include <iostream>
using namespace std;
class Me {
private:
    string name;
    bool male;
    int age=0;
    char* myname;
public:
    Me():Me("Arsenii",true,14){}
    Me(string name, bool male , int age);
    void SetName(string name);
    string GetName();
    void SetMale(bool male);
    bool  GetMale();
    void SetAge(int age);
    int  GetAge();
    void setName(const char* myname);
    string getName() const;

};

