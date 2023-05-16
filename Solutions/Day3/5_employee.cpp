// This program simulates an employee.

#include <iostream>
using namespace std;

class Employee
{
private:
    // The name of the employee.
    string name;

    // The employee ID of the employee.
    int employeeID;

    // The salary of the employee.
    double salary;

public:
    // This function sets the name, employee ID, and salary of the employee.
    void setEmployeeDetails()
    {
        // Get the name, employee ID, and salary of the employee from the user.
        cout << "Enter the employee's name: ";
        getline(cin, name);

        cout << "Enter the employee's ID: ";
        cin >> employeeID;

        cout << "Enter the employee's salary: ";
        cin >> salary;
    }

    // This function increases the salary of the employee by the specified percentage.
    void increaseSalary(double percentage)
    {
        // Calculate the amount of the salary increase.
        double amount = salary * (percentage / 100.0);

        // Increase the salary by the calculated amount.
        salary += amount;
    }

    // This function displays the details of the employee.
    void displayEmployeeDetails() const
    {
        // Print a message stating the details of the employee.
        cout << "Employee Details:" << endl;
        cout << "Name: " << name << endl;
        cout << "Employee ID: " << employeeID << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main()
{
    // Create an Employee object.
    Employee employee;

    // Set the name, employee ID, and salary of the employee.
    employee.setEmployeeDetails();

    // Get the percentage increase in salary from the user.
    double percentageIncrease;
    cout << "Enter the percentage increase in salary: ";
    cin >> percentageIncrease;

    // Increase the salary of the employee by the specified percentage.
    employee.increaseSalary(percentageIncrease);

    // Display the details of the employee.
    employee.displayEmployeeDetails();

    return 0;
}
