#include <fstream>
#include <iostream>
using namespace std;

int main()
{
    ofstream outputFile1("output1.txt");            // Open file for writing
    ifstream inputFile1("input1.txt");              // Open file for reading
    fstream file1("data1.txt", ios::in | ios::out); // Open file for both reading and writing

    // Use the files for reading or writing

    outputFile1.close(); // Close the output file
    inputFile1.close();  // Close the input file
    file1.close();       // Close the file

    // ofstream outputFile("output.txt");
    // If the file "output.txt" doesn't exist in the current working directory, it will be created. If it already exists, its contents will be erased.

    ofstream outputFile;
    outputFile.open("output.txt");
    // This is equivalent to the previous example. The file "output.txt" will be created if it doesn't exist.

    fstream file("data.txt", ios::out);
    // This opens the file "data.txt" for both reading and writing. If the file doesn't exist, it will be created. If it already exists, its contents will be erased.

    ifstream inputFile("input1.txt");
    if (inputFile.is_open())
    {
        // File is open, perform operations
        inputFile.close();
    }
    else
    {
        cout << "File not found." << endl;
    }
    // when opening a file for reading (ifstream), if the file doesn't exist, the opening operation will fail. The file must already exist for successful opening in read mode.
    return 0;
}
