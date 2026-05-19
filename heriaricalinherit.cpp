#include <iostream>
using namespace std;

// herieiral  inheritance that one parent and many children
class animal
{
public:
    void eat()
    {
        cout << "Eating " << endl;
    }
};
class dog : public animal
{
public:
    void bark()
    {
        cout << "Barking " << endl;
    }
};

class cat : public animal
{
public:
    void mew()
    {
        cout << "Meowing " << endl;
    }
};

int main()
{
    dog d;
    cat c;
    cout << "Dog" << endl;
    d.eat();
    d.bark();
    cout << "Cat" << endl;
    c.eat();
    c.mew();

    return 0;
}