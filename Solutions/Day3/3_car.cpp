// This program simulates a car.

#include <iostream>
using namespace std;

class Car
{
private:
    // The model of the car.
    string model;

    // The manufacturing year of the car.
    int year;

public:
    // This function sets the model and manufacturing year of the car.
    void setCarDetails()
    {
        // Get the model and manufacturing year of the car from the user.
        cout << "Enter the model of the car: ";
        cin >> model;

        cout << "Enter the manufacturing year of the car: ";
        cin >> year;
    }

    // This function starts the car.
    void start()
    {
        // Print a message stating that the car with the specified model has started.
        cout << "The car with model" << model << " has started." << endl;
    }

    // This function stops the car.
    void stop()
    {
        // Print a message stating that the car with the specified model has stopped.
        cout << "The car with model" << model << " has stopped." << endl;
    }

    // This function displays the details of the car.
    void displayCarDetails() const
    {
        // Print a message stating the details of the car.
        cout << "Car Details:" << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
    }
};

int main()
{
    // Create a Car object.
    Car car;

    // Set the model and manufacturing year of the car.
    car.setCarDetails();

    // Start the car.
    car.start();

    // Stop the car.
    car.stop();

    // Display the details of the car.
    car.displayCarDetails();

    return 0;
}
