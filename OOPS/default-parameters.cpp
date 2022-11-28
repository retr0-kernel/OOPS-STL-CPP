#include <iostream>
using namespace std;

void myFunction(string country = "India"){
    cout << country << "\n";
}

int main(){
    myFunction("USA");
    myFunction("Sweden");
    myFunction("Russia");
    myFunction();
}