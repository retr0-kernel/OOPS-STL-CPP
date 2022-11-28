#include <iostream>
using namespace std;

//Base Class
class Employee{
    protected:
      int salary;
};

//Derived Class
class Programmer: public Employee{
    public:
      int bonus;
      void setSalary(int s){
        salary = s;
      }

      int getSalary(){
        return salary;
      }
};

int main(){
    Programmer myObj;
    myObj.setSalary(50000);
    myObj.bonus = 15000;

    cout << "Salary: " << myObj.getSalary() << endl;
    cout << "Bonus: " << myObj.bonus << endl;

    return 0;
}
