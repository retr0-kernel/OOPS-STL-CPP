#include <iostream>
#include <vector>
using namespace std;

void printVec(vector<int> &v){
    cout<<"Size "<<v.size()<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
    v.push_back(2);
}

int main(){
    vector<int> v;
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    vector<int> v2=v;
    printVec(v);
    printVec(v);
    //printVec(v2);
}