#include <iostream>
using namespace std;

// Base class (parent)
class MyClass
{
public:
  void myFunction()
  {
    cout << "You taught me how to live and not just exist";
  }
};

// Derived Class (child)
class MyChild : public MyClass
{
};

// Derived Class (grandchild)
class MyGrandChild : public MyChild
{
};

int main()
{
  MyGrandChild myObj;
  myObj.myFunction();
  return 0;
}