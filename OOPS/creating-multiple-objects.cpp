#include <iostream>
#include <string>
using namespace std;

class Car{
    public:
    string brand;
    string model;
    int year;
};

int main(){

    //Create an Object of Car 1
    Car carObj1;
    carObj1.brand="Ford";
    carObj1.model="Ecosport";
    carObj1.year=1946;

    //Create an Object of Car 2
    Car carObj2;
    carObj2.brand="Audi";
    carObj2.model="Q7";
    carObj2.year=1978;

    //Print Attribute Values
    cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << endl;

    cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << endl;
    return 0;
}