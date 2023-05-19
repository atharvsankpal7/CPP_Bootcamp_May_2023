#include <iostream>
using namespace std;

class volume
{
public:
    // Default constructor
    volume() {}
    // Parameter
    volume(float r)
    {
        cout << "The volume of the sphere with radius " << r << " is " << (4 / 3) * 3.142 * r * r * r << endl;
    }
    volume(int r, int h)
    {
        cout << "The volume of the cone with radius " << r << " and height " << h << " is " << 1 / float(3) * 3.142 * r * r * h << endl;
    }
    volume(double r, double h)
    {
        cout << "The volume of the cylinder with radius " << r << " and height " << h << " is " << 3.142 * r * r * h << endl;
    }
};

int main()
{
    volume v2(1.2);            // Sphere
    volume v3(1, 12);          // Cone
    volume v1(2.1603, 1.9999); // Cylinder

    return 0;
}