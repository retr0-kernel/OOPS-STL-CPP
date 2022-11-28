#include <iostream>
using namespace std;

class A
{

    int a = 15;
    int b = 12;

public:
    int mul()
    {
        int c = a * b;

        return c;
    }
};
class B : private A
{
public:
    void display()
    {
        int result = mul();
        cout << "Multiplication of a & b is: " << result << endl;
    }
};
int main()
{
    B b;
    b.display();

    return 0;
}