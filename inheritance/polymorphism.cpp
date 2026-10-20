#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    virtual void animalSound() {
        cout << "The animal makes a sound." << endl;
    }
};

// Derived class 1
class Dog : public Animal {
public:
    void animalSound() override {
        cout << "The dog says: Bow Wow!" << endl;
    }
};

// Derived class 2
class Cat : public Animal {
public:
    void animalSound() override {
        cout << "The cat says: Meow!" << endl;
    }
};

// Derived class 3
class Pig : public Animal {
public:
    void animalSound() override {
        cout << "The pig says: Wee Wee!" << endl;
    }
};

// Main function
int main() {
    Animal animal;
    Dog dog;
    Cat cat;
    Pig pig;

    Animal* ptr;

    ptr = &animal;
    ptr->animalSound();

    ptr = &dog;
    ptr->animalSound();

    ptr = &cat;
    ptr->animalSound();

    ptr = &pig;
    ptr->animalSound();

    return 0;
}