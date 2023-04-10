#include <iostream>
using namespace std;

class Animal {
   public:
      void eat() {
         cout << "Animal is eating" << endl;
      }
      void sleep() {
         cout << "Animal is sleeping" << endl;
      }
};

class Bird: public Animal {
   public:
      void fly() {
         cout << "Bird is flying" << endl;
      }
};

class Canine: public Animal {
   public:
      void bark() {
         cout << "Canine is barking" << endl;
      }
};

int main() {
   Animal animal;
   Bird bird;
   Canine canine;

   animal.eat();
   animal.sleep();

   bird.fly();

   canine.bark();

   return 0;
}
