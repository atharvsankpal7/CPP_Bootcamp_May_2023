#include <iostream>
using namespace std;
class A
{
    // member variables
public:
    int x;
    // member functions
};
class B : public A
{
    // member variables
public:
    //x
    // member functions
};
class C : protected B
{
    //x
    // member variables
public:
    // member functions
};
int main()
{
    B obj1;
    obj1.x;

    C obj2;
    obj2.x;
    return 0;
}