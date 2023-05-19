#include <iostream>
using namespace std;
class class1
{
private:
    int a = 1;

protected:
    int b = 2;

public:
    int c = 3;
};
class class2 : private class1
{
private:
    // b
    // c
protected:
 
public:
   
    void display()
    {
        cout << b;
        cout << c;
    }
};

int main()
{
    class2 obj2;
    return 0;
}