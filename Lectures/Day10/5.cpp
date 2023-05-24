#include <iostream>
#include<fstream>
using namespace std;

int main()
{
    // other operations
    fstream file("data5.txt", ios::in | ios::out);
    if (file.is_open())
    {
        file.seekp(5);   // Set the file position to the 5th byte (seek put)
        file << "Hello"; // Overwrite the data from the 5th byte onwards
        file.close();
    }
    return 0;
}