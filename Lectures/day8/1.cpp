#include <iostream>
using namespace std;
template <typename datatype>
class addition
{
public:
    datatype sum(datatype a, datatype b)
    {
        return a + b;
    }
    void printdata()
    {
        cout << "hello" << endl;
    }
};
int main()
{
    addition<int> obj1, obj3;
    addition<float> obj2;
    float c = obj1.sum(5, 6);
    cout << c << endl;
    c = c + 0.1;
    cout << c << endl;
    double x = obj2.sum(1.2, 1.3);
    cout << x << endl;
    return 0;
}