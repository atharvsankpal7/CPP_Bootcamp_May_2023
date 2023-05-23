#include <iostream>
using namespace std;
class a
{
public:
    virtual void display() = 0; // Pure virtual function
};

class b : public a
{
public:
    void display()
    {
        cout << "Display" << endl;
    }
};
class c : public a
{
public:
    void display()
    {
        cout << "This is class c" << endl;
    }
};
class d : public a
{
public:
    void display()
    {
        cout << "This is class d" << endl;
    }
};
int main()
{

    b obj2;
    obj2.display();
    c obj3;
    obj3.display();
    d obj4;
    obj4.display();
    return 0;
}