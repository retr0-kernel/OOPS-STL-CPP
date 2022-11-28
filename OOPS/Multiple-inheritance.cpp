#include <iostream>
using namespace std;

//Base Class
class MyClass{
    public:
      void myFunction(){
        cout << "WaterMelon Sugar High!" << endl;
      }
};

//Another Base Class
class MyOtherClass{
    public:
      void myOtherFunction(){
        cout << "Strawberries and Cigarettes";
      }
};

//Derived Class
class MyChildClass: public MyClass, public MyOtherClass{
};

int main(){
    MyChildClass myObj;
    myObj.myFunction();
    myObj.myOtherFunction();
    return 0;
}