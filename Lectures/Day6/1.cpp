#include <iostream>
using namespace std;
class base1
{
public:
    int a;
};
class base2
{

    int b;
};

class derived : private base1, public base2
{
public:
    int c;
};

int main()
{
    derived obj1;

    return 0;
}