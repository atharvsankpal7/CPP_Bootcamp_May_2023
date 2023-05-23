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
    virtual void print_data() = 0; // Pure virtual function
};

class c : public b
{
public:
    void hello()
    {
        cout << "Hello" << endl;
    }
    void print_data()
    {
        cout << "The data is printed" << endl;
    }
};

class d : public c
{
public:
    void namaskar()
    {
        cout << "namaskar" << endl;
    }
};
int main()
{

    d obj2;

    obj2.display();
    return 0;
}