#include <iostream>
using namespace std;

class employee
{
    int salary = 47;

public:
    employee()
    {
        cout << "The salary of this employee is " << salary << endl; // 1
    }
};

class programmer : public employee
{
public:
    programmer()
    {
        cout << "The employee is a programmer " << endl; // 2
    }
};
int main()
{
    programmer p1;
    programmer p2;
    employee e1;
    return 0;
}
