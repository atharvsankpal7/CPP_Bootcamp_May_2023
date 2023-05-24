#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int a;
    ofstream obj1("table.txt");
    cout << "Enter the number whose table has to be printed" << endl;
    cin >> a;
    for (int i = 1; i <= 10; i++)
    {
        obj1 << i * a << endl;
    }
    obj1.close();
    cout << "The table has been printed" << endl;
    return 0;
}