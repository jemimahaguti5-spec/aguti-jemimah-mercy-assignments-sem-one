# C++ Inheritance Example

## 1. Introduction
This project demonstrates inheritance in C++ using a base class
and a derived class.

Inheritance is an object-oriented programming concept that allows
a class to acquire the properties and member functions of another
class.

## 2. Objective
The objective of this program is to demonstrate:
- How to create a base class.
- How to create a derived class.
- How public inheritance works.
- How the protected access specifier allows a derived class to
  access members of its base class.
- How to use member functions to set and retrieve data.

## 3. Program Description
The program contains two classes:

### Employee
This is the base class. It contains a protected data member
called `salary`.

### Programmer
This is the derived class that publicly inherits from `Employee`.

It contains:
- A public data member called `bonus`.
- A `setSalary()` function to assign a salary.
- A `getSalary()` function to return the salary.

The derived class can access the protected `salary` member
directly through its member functions.

## 4. Program Output

Salary: 50000
Bonus: 15000

## 5. Concepts Demonstrated
- Classes and objects.
- Base and derived classes.
- Public inheritance.
- Protected access specifier.
- Member functions.
- Data access and encapsulation concepts.

## 6. Compilation and Execution
Compile the program using a C++ compiler such as g++:

    g++ inheritance.cpp -o inheritance

Run the program:

    ./inheritance

On Windows, run:

    inheritance.exe

## 7. Conclusion
The program demonstrates how inheritance allows the Programmer
class to reuse and access the protected salary member inherited
from the Employee class. It also shows how the derived class
can introduce additional members, such as bonus.