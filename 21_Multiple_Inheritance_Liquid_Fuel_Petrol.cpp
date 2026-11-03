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

Program Title : Multiple Inheritance Using
                Liquid,Fuel and Petrol

Concept Used:
- Class and Object
- Multiple Inheritance
- Base Class
- Derived Class
- Public Inheritance
- Data Members
- Member Functions
- Object Creation
- Inherited Member Function Calling
- Access Specifiers

Description:
This program demonstrates multiple inheritance.

The Liquid class is the first base class.
The Fuel class is the second base class.
The Petrol class inherits from both Liquid and Fuel.

Therefore, the Petrol class can access the public
member functions of both base classes.

=========================================================
*/

#include <iostream>
#include <string>
using namespace std;

// Base class 1
class Liquid
{
    int volume;

public:

    // Function of Liquid class
    void display1()
    {
        cout << "Liquid" << endl;
    }
};

// Base class 2
class Fuel
{
    string type;

public:

    // Function of Fuel class
    void display2()
    {
        cout << "Fuel" << endl;
    }
};

// Derived class inheriting Liquid and Fuel
class Petrol : public Liquid, public Fuel
{
    string fuel_type;

public:

    // Function of Petrol class
    void display3()
    {
        cout << "Petrol" << endl;
    }
};

int main()
{
    // Creating objects of each class
    Liquid l1;
    Fuel f1;
    Petrol p1;

    // Calling Liquid class function
    l1.display1();

    // Calling Fuel class function
    f1.display2();

    // Calling Petrol class function
    p1.display3();

    // Calling inherited Fuel class function
    p1.display2();

    // Calling inherited Liquid class function
    p1.display1();

    return 0;
}
```
