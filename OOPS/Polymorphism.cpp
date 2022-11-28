/*
Polymorphism means "many forms", and it occurs when we have many classes that are related to each other by inheritance.

Like we specified in the previous chapter; Inheritance lets us inherit attributes and methods from another class. Polymorphism uses those methods to perform different tasks. This allows us to perform a single action in different ways.

For example, think of a base class called Animal that has a method called animalSound(). Derived classes of Animals could be Pigs, Cats, Dogs, Birds - And they also have their own implementation of an animal sound (the pig oinks, and the cat meows, etc.):
*/
#include <iostream>
using namespace std;

//Base Class
class Animal{
    public:
      void animalsound(){
        cout << "This animal makes a sound \n";
      }
};

//Derived Class
class Pig : public Animal{
    public:
      void animalsound(){
        cout << "The pig says: wee wee \n";
      }
};

//Derived Class
class Dog: public Animal{
    public:
      void animalsound(){
        cout << "The dog says: bow bow \n";
      }
};

int main(){
    Animal myAnimal;
    Pig myPig;
    Dog myDog;

    myAnimal.animalsound();
    myPig.animalsound();
    myDog.animalsound();
    return 0;
}