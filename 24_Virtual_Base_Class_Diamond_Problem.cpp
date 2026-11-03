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

Program Title : Resolving Diamond Problem Using
                Virtual Base Class

Concept Used:
- Class and Object
- Multiple Inheritance
- Diamond Problem
- Virtual Base Class
- Public Inheritance
- Base Class and Derived Class
- Data Members
- Ambiguity Resolution

Description:
This program demonstrates how to solve the
diamond problem using virtual inheritance.

Class B and Class C inherit virtually from A.
Class D inherits from both B and C.

Virtual inheritance ensures that only one
shared copy of class A is available in D.

=========================================================
*/

#include <iostream>
using namespace std;

// Base class
class A
{
public:
    int i;
};

// Derived class using virtual inheritance
class B : virtual public A
{
public:
    int j;
};

// Derived class using virtual inheritance
class C : public virtual A
{
public:
    int k;
};

// Derived class
class D : public B, public C
{
public:
    int sum;
};

int main()
{
    // Creating object of D
    D obj1;

    // Accessing shared base class member
    obj1.i = 10;

    obj1.j = 20;
    obj1.k = 30;

    // Calculating sum
    obj1.sum = obj1.i + obj1.j + obj1.k;

    // Displaying result
    cout << "The Sum is: "
         << obj1.sum << endl;

    return 0;
}
```
