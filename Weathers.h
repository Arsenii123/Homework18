#include <iostream>
using namespace std;
class Weather {
private:
    string type;
    string season;
    bool bad;
public:
    void SetType(string new_type);
    string GetType();
    void SetSeason(string new_season);
    string GetSeason();
    void SetBad(bool new_bad);
    bool  GetBad();

};

