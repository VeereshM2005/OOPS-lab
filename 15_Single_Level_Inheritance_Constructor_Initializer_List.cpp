```cpp
/*
=========================================================
                    OOPS LAB PROGRAM
=========================================================

Name          : Veeresh B Muragod
Roll No       : 116
Division      : A
SRN           : 01FE24BEC416
Semester      : 7th Semester

Program Title : Single Level Inheritance Using
                Constructor Initializer List

Concept Used:
- Class and Object
- Single Level Inheritance
- Base Class
- Derived Class
- Public Inheritance
- Constructors
- Parameterized Constructor
- Constructor Initializer List
- Constructor Calling in Derived Class
- Data Members
- Member Functions
- String Data Type

Description:
This program demonstrates single-level inheritance.

The Animal class is the base class.
The Dog class inherits from the Animal class.

The base class constructor initializes the number
of legs and eyes.

The derived class constructor calls the base class
constructor using a constructor initializer list
and initializes the dog's tail color.

=========================================================
*/

#include <iostream>
#include <string>
using namespace std;

// Base class
class Animal
{
    int legs;
    int eyes;

public:

    // Parameterized constructor with initializer list
    Animal(int f, int h) : legs(f), eyes(h)
    {
    }

    // Function of Animal class
    void display1()
    {
        cout << "This is Base Class" << endl;

        cout << "\nLegs = " << legs << endl;
        cout << "\nEyes = " << eyes << endl;
    }
};

// Derived class from Animal
class Dog : public Animal
{
    string dog_tail_color;

public:

    // Derived class constructor
    // Calls the base class constructor
    Dog(int a, int b, string tail_color)
        : Animal(a, b), dog_tail_color(tail_color)
    {
    }

    // Function of Dog class
    void display2()
    {
        cout << "This is Derived Class" << endl;

        cout << "\nTail_color = "
             << dog_tail_color << endl;
    }
};

int main()
{
    // Creating object of Dog class
    Dog d1(7, 5, "brown");

    // Calling base class function
    d1.display1();

    // Calling derived class function
    d1.display2();

    return 0;
}
```
