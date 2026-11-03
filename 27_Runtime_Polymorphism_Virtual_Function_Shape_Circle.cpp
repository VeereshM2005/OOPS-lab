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

Program Title : Runtime Polymorphism Using
                Virtual Function (Shape and Circle)

Concept Used:
- Class and Object
- Inheritance
- Single Level Inheritance
- Base Class and Derived Class
- Virtual Function
- Function Overriding
- Runtime Polymorphism
- Late Binding
- Base Class Pointer
- Dynamic Binding
- Override Keyword

Description:
This program demonstrates runtime polymorphism.

The Shape class is the base class.
The Circle class inherits from Shape.

Both classes contain a draw() function.
The draw() function in Shape is declared virtual.

A base class pointer points to a Circle object.
Therefore, the Circle class draw() function
is executed at runtime.

=========================================================
*/

#include <iostream>
using namespace std;

// Base class
class Shape
{
public:

    // Virtual function
    virtual void draw()
    {
        cout << "Generic shape" << endl;
    }
};

// Derived class
class Circle : public Shape
{
public:

    // Overriding virtual function
    void draw() override
    {
        cout << "Circle" << endl;
    }
};

int main()
{
    // Creating derived class object
    Circle c;

    // Creating base class pointer
    Shape* s = &c;

    // Calling overridden function
    s->draw();

    return 0;
}
```
