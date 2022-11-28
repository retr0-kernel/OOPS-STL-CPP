/*
To create a file, use either the ofstream or fstream class, and specify the name of the file.

To write to the file, use the insertion operator (<<).
*/

#include <iostream>
#include <fstream>
using namespace std;

int main(){
    //Create and open a text file
    ofstream MyFile("filename.txt");

    //Write to the File
    MyFile << "Saddest part is you gave me happy memories but now you are one of them T_T";

    //Close the File
    MyFile.close();
}