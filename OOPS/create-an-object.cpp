#include <iostream>
using namespace std;

class MyClass{
    public:               //Access Specifier 
        int myNum;        //Attribute (int variable)
        string MyString;  //Attribute (string variable)
};

int main(){
    MyClass myObj;        //Create an object of MyClass

    //Access attributes and set values
    myObj.myNum=20;
    myObj.MyString="Krish Srivastava";

    //Print attribute values
    cout<<myObj.myNum<<"\n";
    cout<<myObj.MyString;
    return 0;
}

