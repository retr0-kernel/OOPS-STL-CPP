#include <iostream>
using namespace std;

int main(){
    try{
        int age = 15;
        if(age >= 18){
            cout << "Access Granted! - You are old enough!";
        }else{
            throw(age);
        }
    }
    catch(int myNum){
        cout << "Access Denied! - You must be atleast 18 years old!" << endl;
        cout << "Age is: " << myNum;
    }
    return 0;
}

/*
We use the try block to test some code: If the age variable is less than 18, we will throw an exception, and handle it in our catch block.

In the catch block, we catch the error and do something about it. The catch statement takes a parameter: in our example we use an int variable (myNum) (because we are throwing an exception of int type in the try block (age)), to output the value of age.

If no error occurs (e.g. if age is 20 instead of 15, meaning it will be be greater than 18), the catch block is skipped
*/