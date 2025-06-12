#include <iostream>
using namespace std;
class Flower {
private:
    bool real;
    int count;
    string color;
    char* name;
public:
    Flower() :Flower(true, 0, "-"){}
    Flower(bool real, int count, string color);
    void SetCount(int count);
    int  GetCount();
    void SetColor(string color);
    string  GetColor();
    void SetReal(bool real);
    bool  GetReal();
    void setName(const char* name);
    string getName() const;

};

