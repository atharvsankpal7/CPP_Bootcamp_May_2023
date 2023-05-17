#include <iostream>
using namespace std;

int volume(int side)
{
    return side * side * side;
}

float volume(double side, double height)
{
    return side * side * height * 3.14;
}
float volume(double side, int height)
{
    return 3.14 * side * side * height * 0.33;
}
float volume(float side)
{
    return side * side * side * 3.14 * 1.33;
}

int main()
{
    cout << "the volume of cuboidal side length 3 is " << volume(3) << endl;

    cout << "the volume of cylender with radius 4.2 and height 8 is " << volume(4.2, 8) << endl;

    cout << "the volume of cone with radius 2 and height 3 is " << volume(2, 3) << endl;

    cout << "the volume of sphere with radius 4 is " << volume(4) << endl;
}