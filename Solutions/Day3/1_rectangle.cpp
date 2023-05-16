// This program calculates the area of a rectangle.

#include <iostream>
using namespace std;

class Rectangle
{
private:
    // The length of the rectangle.
    double length;

    // The width of the rectangle.
    double width;

public:
    // This function sets the length of the rectangle.
    void setLength(double len)
    {
        // Set the length of the rectangle to the value passed in.
        length = len;
    }

    // This function gets the length of the rectangle.
    double getLength()
    {
        // Return the length of the rectangle.
        return length;
    }

    // This function sets the width of the rectangle.
    void setWidth(double wid)
    {
        // Set the width of the rectangle to the value passed in.
        width = wid;
    }

    // This function gets the width of the rectangle.
    double getWidth()
    {
        // Return the width of the rectangle.
        return width;
    }

    // This function calculates the area of the rectangle.
    double calculateArea()
    {
        // Calculate the area of the rectangle and return it.
        return length * width;
    }
};

int main()
{
    // Create a Rectangle object.
    Rectangle rectangle;

    // Creating passing variables
    float length, width;
    
    // Get the length and width of the rectangle from the user.
    cout << "Enter the length of the rectangle: ";
    cin >> length;

    cout << "Enter the width of the rectangle: ";
    cin >> width;

    // Set the length and width of the rectangle.
    rectangle.setLength(length);
    rectangle.setWidth(width);

    // Calculate the area of the rectangle.
    double area = rectangle.calculateArea();

    // Print the area of the rectangle.
    cout << "The area of the rectangle is: " << area << endl;

    return 0;
}
