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

Program Title : Function Overriding Using Virtual
                Function (Runtime Polymorphism)

Concept Used:
- Class and Object
- Inheritance
- Single Level Inheritance
- Function Overriding
- Virtual Function
- Runtime Polymorphism
- Late Binding
- Base Class Pointer
- Derived Class
- Dynamic Function Dispatch

Description:
This program demonstrates function overriding
using the virtual keyword.

The Base class contains a virtual show() function.
Derv1 and Derv2 override the show() function.

A base class pointer is used to call the derived
class functions at runtime.

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

    // Overriding base class function
    void show()
    {
        cout << "Derv1" << endl;
    }
};

// Derived class 2
class Derv2 : public Base
{
public:

    // Overriding base class function
    void show()
    {
        cout << "Derv2" << endl;
    }
};

int main()
{
    // Creating derived class objects
    Derv1 dv1;
    Derv2 dv2;

    // Creating base class pointer
    Base* ptr;

    // Pointing to Derv1 object
    ptr = &dv1;
    ptr->show();

    // Pointing to Derv2 object
    ptr = &dv2;
    ptr->show();

    return 0;
}
```
