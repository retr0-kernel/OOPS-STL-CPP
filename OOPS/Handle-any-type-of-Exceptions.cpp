/*
If you do not know the throw type used in the try block, you can use the "three dots" syntax (...) inside the catch block, which will handle any type of exception:
*/

#include <iostream>
using namespace std;

int main(){
    try{
        int age = 15;
        if (age >= 18){
            cout << "Access Granted! - You are old enough!";
        }else{
            throw 505;
        }
    }
    catch(...){
        cout << "Access Denied! - You must be 18 years old" << endl;
    }
    return 0;
}