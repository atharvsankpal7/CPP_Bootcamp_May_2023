#include <iostream>
using namespace std;

class student
{
    int roll;
    float marks;
    string name;

public:
    void set_data()
    {
        cout << "Enter the roll number ";
        cin >> roll;
        cout << "Enter the marks ";
        cin >> marks;
        cout << "Enter the name  ";
        cin >> name;
    }

    void get_data()
    {
        cout << "The roll number is " << roll << endl;
        cout << "The marks is " << marks << endl;
        cout << "The name is " << name << endl;
    }
};

int main()
{
    student student1, student2, student3;
    student1.set_data();

    student2.set_data();

    student3.set_data();
   
    student1.get_data();
   
    student2.get_data();
   
    student3.get_data();

    return 0;
}