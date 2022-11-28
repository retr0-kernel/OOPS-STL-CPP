#include <bits/stdc++.h>
using namespace std;
template <class T, int size>
class X{
    public:
        T arr[size];
        void insert(){
                int i = 1;
            for(int j=0;j<size;j++){
                arr[j] = i;
                i++;
            }
        }
        void display(){
            for(int i=0;i<size;i++){
                cout<<arr[i]<<" ";
            }
        }
};

int main(){
    X<int,10>a;
    a.insert();
    a.display();
    return 0;
}