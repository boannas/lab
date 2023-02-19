#include <iostream>
using namespace std;

class person 
{
    public :
        int attack;                  
    protected :            
        int hi;
};

class kingh : public person
{
    public :
        int wowza;
        int hi2 = hi;
};

int main()
{
    person fu;
    fu.attack = 10;
    kingh jame;
    jame.hi2 = 10;
}