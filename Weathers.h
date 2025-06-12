#include <iostream>
using namespace std;
class Weather {
private:
    string type;
    string season;
    bool bad;
    char* name;
public:
    Weather():Weather("-","-"){}
    Weather(string type, string season);
    void SetType(string type);
    string GetType();
    void SetSeason(string season);
    string GetSeason();
    void SetBad(bool bad);
    bool  GetBad();
    void setName(const char* name);
    string getName() const;

};

