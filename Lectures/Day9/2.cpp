#include <iostream>
using namespace std;
class a
{
public:
   virtual void display()
    {
        cout << "This is class a" << endl;
    }
};

class b : public a
{
public:
    void display()
    {
        cout << "This is class b" << endl;
    }
};

int main()
{

    b obj2;
    a *ptr1 = &obj2;
    ptr1->display();
   
    return 0;
}