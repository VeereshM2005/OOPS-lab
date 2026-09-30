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

Program Title : Member Function Defined Outside the Class

Concept Used:
- Class and Object
- Member Function
- Scope Resolution Operator (::)
- Data Members

Description:
This program demonstrates how a member function can be
declared inside a class and defined outside the class
using the scope resolution operator (::).

The updateage() function increases the student's age by 1.

=========================================================
*/

#include <iostream>
using namespace std;

class student
{
public:
    // Data members
    string name = "Veeresh";
    int age = 21;

    // Member function declarations
    void DisplayData();
    void updateage();
};

// Member function defined outside the class
void student::DisplayData()
{
    cout << "Name = " << name << endl;
    cout << "Age  = " << age << endl;
}

// Member function to update age
void student::updateage()
{
    age = age + 1;
}

int main()
{
    // Creating an object of student class
    student o1;

    // Displaying original details
    o1.DisplayData();

    // Updating age
    o1.updateage();

    // Displaying updated details
    cout << "\nAfter updating age:" << endl;
    o1.DisplayData();

    return 0;
}
```
