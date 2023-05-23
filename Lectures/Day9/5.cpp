#include <iostream>
using namespace std;
class complex
{
private:
    int a, b;

public:
    void setdata(int x, int y)
    {
        a = x;
        b = y;
    }
    void getdata()
    {
        cout << "The value of a " << a << " and value of b is " << b << endl;
    }
    friend int sum(complex a);
};
int sum(complex obj_parameter)
{
    return obj_parameter.a + obj_parameter.b;
}
int main()
{
    complex obj1;
    obj1.setdata(10, 20);
    cout << sum(obj1);

    complex obj2;
    obj2.setdata(5, 4);
    cout << sum(obj2);
    return 0;
}