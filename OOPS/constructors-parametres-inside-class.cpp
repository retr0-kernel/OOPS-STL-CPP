#include <iostream>
using namespace std;

class Car
{ // The Class
public:
    string brand; // Attribute
    string model; // Attribute
    int year;     // Attribute
    Car(string x, string y, int z)
    { // Constructor with parameters
        brand = x;
        model = y;
        year = z;
    }
};

int main()
{
    // Create Car objects and call the constructor with different values
    Car carObj1("BMW", "X7", 1942);
    Car carObj2("Audi", "Q7", 1977);

    cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << endl;

    cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << endl;

    return 0;
}