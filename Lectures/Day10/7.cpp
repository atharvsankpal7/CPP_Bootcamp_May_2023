#include <iostream>
using namespace std;

int main()
{
    int a;
    int b;
    cout << "Enter the two numbers" << endl;
    cin >> a >> b;
    try
    {
        if (b == 0)
        {
            throw runtime_error("Division by zero is not allowed");
        }
        cout << "The division of these two numbers is " << (float)a / b << endl;
    }
    catch (exception &e)
    {
        cout << "The error is " << e.what() << endl;
    }

    cout << "The code has been executed " << endl;
    return 0;
}