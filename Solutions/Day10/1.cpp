#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream input("input.txt");
    ofstream output("output.txt");
    string line;

    while (getline(input, line))
    {
        output << line << endl;
    }
    input.close();
    output.close();
    cout << "The program has been executed successfully" << endl;
    return 0;
}