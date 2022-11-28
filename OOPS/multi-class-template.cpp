#include <bits/stdc++.h>
using namespace std;

template <typename T>
class Test{
    private:
        T x;
    public:
        void setData(T a){
            x = a;
        }
        T getxData(){
            return x;
        }
};

int main(){
    Test<int> obj;
    obj.setData(5);
    cout<<obj.setData()<<endl;
    return 0;
}