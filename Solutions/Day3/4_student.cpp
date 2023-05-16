// This program simulates a student.

#include <iostream>
using namespace std;

class Student
{
private:
    // The name of the student.
    string name;

    // The roll number of the student.
    int rollNumber;

    // The marks of the student.
    int marks;

public:
    // This function sets the name of the student.
    void setName(string studentName)
    {
        // Set the name of the student to the value passed in.
        name = studentName;
    }

    // This function gets the name of the student.
    string getName() const
    {
        // Return the name of the student.
        return name;
    }

    // This function sets the roll number of the student.
    void setRollNumber(int studentRollNumber)
    {
        // Set the roll number of the student to the value passed in.
        rollNumber = studentRollNumber;
    }

    // This function gets the roll number of the student.
    int getRollNumber() const
    {
        // Return the roll number of the student.
        return rollNumber;
    }

    // This function sets the marks of the student.
    void setMarks(int studentMarks)
    {
        // Set the marks of the student to the value passed in.
        marks = studentMarks;
    }

    // This function gets the marks of the student.
    int getMarks() const
    {
        // Return the marks of the student.
        return marks;
    }

    // This function calculates the grade of the student.
    string calculateGrade() const
    {
        // If the marks of the student are greater than or equal to 90 and less than or equal to 100, then return "Grade A".
        if (marks >= 90 && marks <= 100)
        {
            return "Grade A";
        }

        // Otherwise, if the marks of the student are greater than or equal to 80 and less than or equal to 89, then return "Grade B".
        else if (marks >= 80 && marks <= 89)
        {
            return "Grade B";
        }

        // Otherwise, if the marks of the student are greater than or equal to 70 and less than or equal to 79, then return "Grade C".
        else if (marks >= 70 && marks <= 79)
        {
            return "Grade C";
        }

        // Otherwise, if the marks of the student are greater than or equal to 60 and less than or equal to 69, then return "Grade D".
        else if (marks >= 60 && marks <= 69)
        {
            return "Grade D";
        }

        // Otherwise, return "Grade F".
        else
        {
            return "Grade F";
        }
    }
};

int main()
{
    // Create a Student object.
    Student student;
    
    // Creating passing variables
    string name;
    int rollNumber;
    int marks;
    
    // Get the name, roll number, and marks of the student from the user.
    cout << "Enter the student's name: ";
    getline(cin, name);

    cout << "Enter the student's roll number: ";
    cin >> rollNumber;

    cout << "Enter the student's marks: ";
    cin >> marks;

    // Set the name, roll number, and marks of the student.
    student.setName(name);
    student.setRollNumber(rollNumber);
    student.setMarks(marks);

    // Display the details of the student.
    cout << "Student Details:" << endl;
    cout << "Name: " << student.getName() << endl;
    cout << "Roll Number: " << student.getRollNumber() << endl;
    cout << "Marks: " << student.getMarks() << endl;
    cout << "Grade: " << student.calculateGrade() << endl;

    return 0;
}
