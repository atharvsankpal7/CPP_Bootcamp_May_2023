#include <iostream>
using namespace std;
float operation(float a, float b)
{
    return a - b;
}
float operation2(float a, float b)
{
    return a + b;
}
//
float operation(float a, float b,float c)
{
    return a * b;
}

int main()
{
    cout << operation(5, 6, 1)<<endl;
    cout << operation(5, 6)<<endl;
    return 0;
}