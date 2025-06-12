#include <iostream>
using namespace std;
class Parents {
private:
    string mood;
    string mom;
    string dad;
    char* name;
public:
    Parents() :Parents("-", "-", "-"){}
    Parents(string mood, string mom, string dad);
    void SetNames(string mom, string dad);
    string GetNames();
    void SetMood(string mood);
    string GetMood();
    void setName(const char* name);
    string getName() const;
};

