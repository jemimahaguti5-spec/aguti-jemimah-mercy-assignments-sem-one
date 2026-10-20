# C++ Runtime Polymorphism Example

## 1. Introduction
This project demonstrates runtime polymorphism in C++ using
inheritance, virtual functions, and function overriding.

Polymorphism is an object-oriented programming concept that
allows the same interface to produce different behaviours
depending on the object involved.

## 2. Objective
The objective of this program is to demonstrate:
- How to create a base class and derived classes.
- How to use virtual functions.
- How function overriding works.
- How base-class pointers can point to derived-class objects.
- How runtime polymorphism is achieved in C++.

## 3. Program Description
The program contains four classes:

### Animal
This is the base class. It defines a virtual function called
`animalSound()`.

### Dog
This derived class overrides `animalSound()` to display the
sound made by a dog.

### Cat
This derived class overrides `animalSound()` to display the
sound made by a cat.

### Pig
This derived class overrides `animalSound()` to display the
sound made by a pig.

The program uses a pointer of type `Animal*` to refer to objects
of different classes. When `animalSound()` is called, C++ executes
the appropriate overridden function for the object being referenced.

## 4. Program Output

The animal makes a sound.
The dog says: Bow Wow!
The cat says: Meow!
The pig says: Wee Wee!

## 5. Concepts Demonstrated
- Classes and objects.
- Inheritance.
- Virtual functions.
- Function overriding.
- Base-class pointers.
- Runtime polymorphism.
- The `override` keyword.

## 6. Compilation and Execution
Compile the program using a C++ compiler such as g++:

    g++ polymorphism.cpp -o polymorphism

Run the program:

    ./polymorphism

On Windows, run:

    polymorphism.exe

## 7. Conclusion
The program demonstrates runtime polymorphism by using a virtual
function in the Animal base class and overriding it in the Dog,
Cat, and Pig derived classes.

A single base-class pointer can refer to different derived-class
objects and invoke the appropriate overridden function at runtime.
This demonstrates how polymorphism supports flexible and reusable
object-oriented programs.