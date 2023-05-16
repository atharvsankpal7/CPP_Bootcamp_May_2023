// This program calculates the average marks and grade of a student.

#include <iostream>
#include <string.h>
using namespace std;

class Marks
{
protected:
    // The name of the student.
    string Name;

    // The marks of the student in 5 subjects.
    int sub[5];

    // The grade of the student.
    string Grade;

public:
    // This function gets the name and marks of the student from the user.
    void GetValue()
    {
        cout << "Enter the name of student: ";
        cin >> Name;
        cout << "Enter the marks of the student: " << endl;
        for (int i = 0; i < 5; i++)
        {
            cout << "Enter the marks of subject number " << i + 1 << ": ";
            cin >> sub[i];
        }
    }

    // This function calculates the average marks and grade of the student.
    void DisplayValue()
    {
        // Calculate the sum of the marks.
        int sum = 0;
        for (int i = 0; i < 5; i++)
        {
            sum += sub[i];
        }

        // Calculate the average marks.
        float avg = (float)sum / 5;

        // Calculate the grade.
        if (avg > 90)
        {
            Grade = "AA";
        }
        else if (avg < 90 && avg >= 80)
        {
            Grade = "AB";
        }
        else if (avg < 80 && avg >= 70)
        {
            Grade = "BB";
        }
        else if (avg < 70 && avg >= 60)
        {
            Grade = "BC";
        }
        else if (avg < 60 && avg >= 50)
        {
            Grade = "CC";
        }
        else if (avg < 50 && avg >= 40)
        {
            Grade = "DD";
        }
        else
        {
            Grade = "FF";
        }

        // Print the sum, average, and grade of the student.
        cout << "The sum of the marks of student is :" << sum << endl;
        cout << "The average of the marks of student is :" << avg << endl;
        cout << "The Grade obtained by the student is :" << Grade << endl;
    }
};

int main()
{
    // Create a Marks object.
    Marks s1;

    // Get the name and marks of the student from the user.
    s1.GetValue();

    // Calculate the average marks and grade of the student.
    s1.DisplayValue();

    return 0;
}
