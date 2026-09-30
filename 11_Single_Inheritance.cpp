```cpp id="s7wq2m"
/*
=========================================================
                    OOPS LAB PROGRAM
=========================================================

Name          : Veeresh B Muragod
Roll No       : 116
Division      : A
SRN           : 01FE24BEC416
Semester      : 7th Semester

Program Title : Demonstration of Single Inheritance

Concept Used:
- Class and Object
- Inheritance
- Single Inheritance
- Base Class
- Derived Class
- Public Inheritance

Description:
This program demonstrates single inheritance in C++.

The 'animal' class is the base class and contains the
number of legs and a display() function.

The 'dog' class is derived from the 'animal' class using
public inheritance. It has an additional data member
representing the tail and a display2() function.

The object of the derived class can access the public
member functions of the base class.

=========================================================
*/

#include <iostream>
using namespace std;

// Base class
class animal
{
private:
    // Data member of base class
    int legs = 4;

public:

    // Function to display number of legs
    void display()
    {
        cout << "\nLegs = " << legs;
    }
};

// Derived class
class dog : public animal
{
private:
    // Data member of derived class
    bool tail = true;

public:

    // Function to display tail information
    void display2()
    {
        cout << "\nTail = " << tail;
    }
};

int main()
{
    // Creating objects
    animal a1;
    dog d1;

    // Derived class object calling base class function
    d1.display();

    // Calling derived class function
    d1.display2();

    return 0;
}
```
