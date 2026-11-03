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

Program Title : Multilevel Inheritance Using Protected
                Access Specifier

Concept Used:
- Class and Object
- Inheritance
- Multilevel Inheritance
- Base Class and Derived Class
- Public Inheritance
- Protected Access Specifier
- Private Data Members
- Member Functions
- Function Calling Within Derived Classes
- Data Hiding

Description:
This program demonstrates multilevel inheritance
using vehicle, car and sports_car classes.

The vehicle class is the base class.
The car class inherits from vehicle.
The sports_car class inherits from car.

The display1() function is declared as protected.
Therefore, it can be accessed inside derived classes
but cannot be directly accessed from main().

=========================================================
*/

#include <iostream>
using namespace std;

// Base class
class vehicle
{
    // Private data members
    int no_of_wheels = 4, no_of_doors = 5;

protected:

    // Protected member function
    void display1()
    {
        cout << "The vehicle class:";
        cout << "\nNo. of Wheels: " << no_of_wheels;
        cout << "\nNo. of Doors: " << no_of_doors << endl;
    }
};

// Derived class from vehicle
class car : public vehicle
{
    string color = "Blue";
    string type = "SUV";

public:

    // Function of car class
    void display2()
    {
        display1();

        cout << "The color: " << color;
        cout << "\nThe Type: " << type << endl;
    }
};

// Derived class from car
class sports_car : public car
{
    int cc = 1400;

public:

    // Function of sports_car class
    void display3()
    {
        display1();

        cout << "The CC is: " << cc << endl;
    }
};

int main()
{
    // Creating objects
    vehicle v;
    car c;
    sports_car s;

    cout << endl;

    // Calling car class function
    c.display2();

    cout << endl;

    // Calling sports_car class functions
    s.display2();
    s.display3();

    return 0;
}
```
