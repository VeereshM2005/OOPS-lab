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

Program Title : Student Details Using Class and Object

Concept Used:
- Class
- Object
- Data Members
- Member Function
- Encapsulation

Description:
This program demonstrates how a class and object are used
in C++. A class named 'student' is created with data
members to store the student's name and age. A member
function is used to display the stored information.

=========================================================
*/

#include <iostream>
using namespace std;

// Class definition
class student
{
public:
    // Data members
    string name = "Veeresh";
    int age = 21;

    // Member function to display student details
    void DisplayData()
    {
        cout << "Name = " << name << endl;
        cout << "Age  = " << age << endl;
    }
};

int main()
{
    // Creating an object of student class
    student o1;

    // Calling member function using the object
    o1.DisplayData();

    return 0;
}
```
