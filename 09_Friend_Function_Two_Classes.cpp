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

Program Title : Addition of Private Data of Two Classes
                Using a Friend Function

Concept Used:
- Class and Object
- Friend Function
- Multiple Classes
- Private Data Members
- Forward Declaration

Description:
This program demonstrates how a single friend function can
access the private data members of two different classes.

The classes 'abc' and 'xyz' contain private data members.
The function 'add()' is declared as a friend in both
classes, allowing it to access their private members.

=========================================================
*/

#include <iostream>
using namespace std;

// Forward declaration of class xyz
class xyz;

// Class abc
class abc
{
private:
    // Private data member
    int num1;

public:

    // Function to set the value
    void set(int a)
    {
        num1 = a;
    }

    // Declaring add() as a friend function
    friend int add(abc, xyz);
};

// Class xyz
class xyz
{
private:
    // Private data member
    int num2;

public:

    // Function to set the value
    void set(int b)
    {
        num2 = b;
    }

    // Declaring add() as a friend function
    friend int add(abc, xyz);
};

// Friend function definition
int add(abc A, xyz B)
{
    // Accessing private members of both classes
    return A.num1 + B.num2;
}

int main()
{
    // Creating objects of both classes
    abc n;
    xyz m;

    // Setting values
    n.set(2);
    m.set(4);

    // Calling the friend function
    cout << "Sum = " << add(n, m);

    return 0;
}
```
