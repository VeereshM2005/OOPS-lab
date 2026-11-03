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

Program Title : Virtual Function and Function Overriding

Concept Used:
- Class and Object
- Inheritance
- Function Overriding
- Virtual Function
- Runtime Polymorphism
- Base Class Pointer
- Derived Class
- Late Binding
- Override Keyword
- Object Creation

Description:
This program demonstrates virtual functions
and function overriding.

The Base class contains a virtual show() function.
Derv1 and Derv2 override the show() function.

A base class pointer points to a Derv2 object
and calls its overridden function.

The base class and derived class objects also
call their respective show() functions.

=========================================================
*/

#include <iostream>
using namespace std;

// Base class
class Base
{
public:

    // Virtual function
    virtual void show()
    {
        cout << "Base" << endl;
    }
};

// Derived class 1
class Derv1 : public Base
{
public:

    // Overriding function
    void show()
    {
        cout << "Derv1" << endl;
    }
};

// Derived class 2
class Derv2 : public Base
{
public:

    // Overriding function
    void show() override
    {
        cout << "Derv2" << endl;
    }
};

int main()
{
    // Creating base class pointer
    Base* ptr;

    // Creating objects
    Base b;
    Derv1 dv1;
    Derv2 dv2;

    // Pointing base pointer to Derv2 object
    ptr = &dv2;

    // Calling virtual function through pointer
    ptr->show();

    // Calling base class function
    b.show();

    // Calling Derv1 function
    dv1.show();

    // Calling Derv2 function
    dv2.show();

    return 0;
}
```
