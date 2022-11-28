#include <iostream>
#include <vector>
using namespace std;

void printVec(vector<int> &v){
    cout<<"Size "<<v.size()<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
}

int main(){
    vector<int> v(5);
    //vectot<int> v{1,2,3,4,5}; Passing values 
    //vector<int> v(5,10); 5 values of 10 will be inserted
    v.push_back(5);
    printVec(v);
}