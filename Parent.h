#include <iostream>
using namespace std;
class Parents {
private:
    string mood;
    string mom;
    string dad;
public:
    void SetNames(string new_mom, string new_dad);
    string GetNames();
    void SetMood(string new_mood);
    string GetMood();
};

