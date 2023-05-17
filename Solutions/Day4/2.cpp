#include <iostream>
using namespace std;

class volume
{
public:
    // Default constructor
    volume() {}
    // Calculates the volume of sphere
    volume(float r)
    {
        cout << "The volume of the sphere with radius " << r << " is " << (4 / 3) * 3.142 * r * r * r << endl;
    }
    // Calculates the volume of cone
    volume(int r, int h)
    {
        cout << "The volume of the cone with radius " << r << " and height " << h << " is " << 1 / float(3) * 3.142 * r * r * h << endl;

    }
    // Calculates the volume of cylinder
    volume(double r, double h)
    {
        cout << "The volume of the cylinder with radius " << r << " and height " << h << " is " << 3.142 * r * r * h << endl;
    }
};

int main()
{
//   sphere      cone      cylinder
    volume v1(2.1603), v2(3, 4), v3(3.65, 0.246);
    return 0;
}