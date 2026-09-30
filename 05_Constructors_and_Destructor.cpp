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

Program Title : Demonstration of Constructors and Destructor

Concept Used:
- Class and Object
- Default Constructor
- Parameterized Constructor
- Copy Constructor
- Destructor
- Constructor Overloading

Description:
This program demonstrates different types of constructors
and a destructor in C++.

1. Default Constructor:
   Initializes length and width to zero.

2. Parameterized Constructor:
   Initializes length and width using values supplied by
   the user/program.

3. Copy Constructor:
   Creates a new object by copying the values of an
   existing object.

4. Destructor:
   Is automatically called when an object is destroyed.

=========================================================
*/

#include <iostream>
using namespace std;

class Rectangle
{
private:
    // Private data members
    float length, width;

public:

    // Default constructor
    Rectangle()
    {
        length = 0;
        width = 0;
    }

    // Parameterized constructor
    Rectangle(float l, float w)
    {
        length = l;
        width = w;
    }

    // Copy constructor
    Rectangle(const Rectangle &r)
    {
        length = r.length;
        width = r.width;
    }

    // Function to display rectangle details
    void display()
    {
        cout << "Length: " << length << endl;
        cout << "Width: " << width << endl;
    }

    // Destructor
    ~Rectangle()
    {
        cout << "Destructor called" << endl;
    }
};

int main()
{
    // Creating object using default constructor
    Rectangle r1;

    cout << "Default Constructor:" << endl;
    r1.display();

    // Creating object using parameterized constructor
    Rectangle r2(10, 5);

    cout << "\nParameterized Constructor:" << endl;
    r2.display();

    // Creating object using copy constructor
    Rectangle r3(r2);

    cout << "\nCopy Constructor:" << endl;
    r3.display();

    return 0;
}
```
