#include <iostream>
using namespace std;
class A
{
    int a;

public:
    A(int x)
    {
        a = x;
        cout << "This is a consturctor " << a << endl;
    }
    ~A()
    {
        cout << "The value of a " << a << endl;
    }
};
int main()
{

    A obj2(2);
    A obj1(1);

    return 0;
}
/*
This is a consturctor 2
This is a consturctor 1
The value of a 1
The value of a 2
*/