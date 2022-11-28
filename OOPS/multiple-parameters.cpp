#include <iostream>
using namespace std;

void myFunction(string fname="Krish", int age=18){
    cout << fname << " is the name and " << age << " is his age \n"; 
}
int main(){
    myFunction("Shivansh", 19);
    myFunction("Divyanshu", 20);
    myFunction();
    myFunction("Amandeep", 20);
    return 0;
    
}