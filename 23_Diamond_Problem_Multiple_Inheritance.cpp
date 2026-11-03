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

Program Title : Demonstration of Diamond Problem
                in Multiple Inheritance

Concept Used:
- Class and Object
- Multiple Inheritance
- Diamond Problem
- Base Class and Derived Class
- Public Inheritance
- Data Members
- Ambiguity in Inheritance
- Scope Resolution Operator

Description:
This program demonstrates the diamond problem.

Class B and Class C both inherit from Class A.
Class D inherits from both B and C.

Therefore, Class D contains two copies of
Class A, creating ambiguity while accessing
the member variable i.

The scope resolution operator is used to
resolve the ambiguity.

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

// Derived class from A
class B : public A
{
public:
    int j;
};

// Derived class from A
class C : public A
{
public:
    int k;
};

// Derived class from B and C
class D : public B, public C
{
public:
    int sum;
};

int main()
{
    // Creating object of D
    D obj1;

    // Resolving ambiguity using scope resolution
    obj1.B::i = 10;
    obj1.j = 20;
    obj1.k = 30;

    // Calculating sum
    obj1.sum = obj1.B::i + obj1.j + obj1.k;

    // Displaying result
    cout << "The Sum is: "
         << obj1.sum << endl;

    return 0;
}
```
