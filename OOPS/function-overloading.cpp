#include <iostream>
using namespace std;

int plusFunc(int x, int y)
{
    return x + y;
}

double plusFunc(double x, double y)
{
    return x + y;
}

int main()
{
    int myNum1 = plusFunc(8, 5);
    int myNum2 = plusFunc(3.14, 6.89);
    cout << "Int: " << myNum1 << endl;
    cout << "Double: " << myNum2 << endl;

    return 0;
}

//Multiple functions can have the same name as long as the number and/or type of parameters are different.