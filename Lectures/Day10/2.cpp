#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // checking if file is open
    ifstream inputFile("input2.txt");
    if (inputFile.is_open())
    {
        // File is open, perform operations
        cout << "The file is opened" << endl;
        inputFile.close();
        cout << "The file is closed" << endl;
    }
    else
    {
        cout << "Failed to open the file." << endl;
    }
    return 0;
}