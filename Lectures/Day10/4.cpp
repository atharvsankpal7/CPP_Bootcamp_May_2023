#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // reading from a file
    ifstream input("input4.txt");
    if (input.is_open())
    {
        string line;
        while (getline(input, line))
        {
            cout << line << endl;
        }
        input.close();
    }
    else
    {
        cout << "The file is not opened" << endl;
    }
    return 0;
}