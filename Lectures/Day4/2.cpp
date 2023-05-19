#include <iostream>
using namespace std;
class keyboard
{

    int data1;
    string data2;
    float data3;

public:
    // Default Constructor
    keyboard()
    {
        cout << "This is a default constructor" << endl;
    }
    // parameterized Constructor
    keyboard(int a)
    {
        cout << a;
    }
    keyboard(float x, float y)
    {
        cout << "The value of x is " << x << endl;
        cout << "The value of y is " << y << endl;
    }
    void function1()
    {
        cout << "This is function1" << endl;
    }
    int function1(int a)
    {
        cout << "This is a second function1" << endl;
        return a;
    }
    int function2()
    {
        return 5;
    }
};

int main()
{
    keyboard s1(123);
    keyboard s2(456);
    keyboard s3;
    s2.function1();
    s1.function1(4);
    keyboard s3(1.2, 2.2);

    return 0;
}