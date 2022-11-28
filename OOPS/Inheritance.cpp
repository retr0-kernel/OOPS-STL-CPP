//In the example below, the Car class (child) inherits the attributes and methods from the Vehicle class (parent):

#include <iostream>
using namespace std;

//Base Class
class Salutation{
    public:
      string salutation = "Mr.";
      void greet(){
        cout << "Hello there!" << endl;
      }
};

//Derived Class
class Krish: public Salutation{
    public:
      string first_name = "Krish";
};

int main(){
    Krish myName;
    myName.greet();
    cout << myName.salutation + " " + myName.first_name;
    return 0;
}