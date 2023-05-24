#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // writing in a file
    ofstream output("output3.txt");

    output << "Hello, World!" << endl;
    output << "This is a line of text." << endl;
    output.close();

    return 0;
}