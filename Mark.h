#include <iostream>
using namespace std;
class Marks {
private:
    double mark;
    char* name;
public:
    Marks():Marks(1.0){}
    Marks(double mark);
    void SetMark(double mark);
    double  GetMark();
    void setName(const char* name);
    string getName() const;

};

