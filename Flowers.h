#include <iostream>
using namespace std;
class Flower {
private:
    bool real;
    int count;
    string color;
public:
    void SetCount(int new_count);
    
    int  GetCount();
    void SetColor(string new_color);
    string  GetColor();
    void SetReal(bool new_real);
    bool  GetReal();

};

