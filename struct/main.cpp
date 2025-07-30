#include <iostream>
using namespace std;

// Struct
// Apa itu struct?
// Struct: User-defined composite data type,
// that allows grouping of different data types under a single name.

// Class & Object -> OOP

struct Human
{
    string name;
    int age;
    char gender; // 'M' or 'F'
    bool alive;

    void poop()
    {
        cout << name << " is pooping -> brot brot.. 💩" << endl;
    }

    void suicide()
    {
        alive = false;
    }
};

void kill(Human *someone)
{
    someone->alive = false;
}

int main()
{
    Human adam;
    adam.name = "Adam";
    adam.age = 35;
    adam.gender = 'M';
    adam.alive = true;

    Human eve = {"Eve", 25, 'F', true};

    adam.poop();
    eve.poop();
    kill(&adam);
    eve.suicide();

    cout << adam.name << " is " << adam.age << " years old. Alive: " << adam.alive << endl;
    cout << eve.name << " is " << eve.age << " years old. Alive: " << eve.alive << endl;
    return 0;
}
