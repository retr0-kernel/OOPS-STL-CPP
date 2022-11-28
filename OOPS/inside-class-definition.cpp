#include <iostream>
using namespace std;

class MyClass{                   // The Class
    public:                      // Access Specifier
    void myMethod(){             // Method defined inside class
        cout << "Krish Srivastava";
      }
};

int main(){
    MyClass myObj;                 // Create an object of MyClass
    myObj.myMethod();              // Call the Method
    return 0;
}