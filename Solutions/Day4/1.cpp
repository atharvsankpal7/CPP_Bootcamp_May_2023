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
float volume(double side)
{
    return side * side * side * 3.14 * 1.33;
}

class class_name
{
public:
    class_name() {}
    int volume(int a)
    {
        return;
    }
    float volume(float a, float b)
    {
        return;
    }
};

int main()
{
    cout << "the volume of cuboid with side of length 3 is " << volume(3) << endl;

    cout << "the volume of cylinder with radius 4.2 and height 8.3 is " << volume(4.2, 8.3) << endl;

    cout << "the volume of cone with radius 2 and height 3 is " << volume(2, 3) << endl;

    cout << "the volume of sphere with radius 4.2 is " << volume(4.2) << endl;
}