#include <iostream>
using namespace std;

class MyClass{                      //The Class
    public:                         //Access Specifier
      void myMethod();              //Method Declaration
};

//Method Definition outside the class
void MyClass::myMethod(){
    cout << "Krish Srivastava";
}

int main(){
    MyClass myObj;                  //Create an object of MyClass
    myObj.myMethod();               //Call the method 
    return 0;
}