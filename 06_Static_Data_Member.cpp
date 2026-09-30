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

Program Title : Employee Details Using Static Data Member

Concept Used:
- Class and Object
- Static Data Member
- Static Variable
- Member Functions
- Encapsulation

Description:
This program demonstrates the use of a static data member
in C++. The static variable 'count' is shared by all
objects of the employee class.

The employee ID starts from 145 and is automatically
incremented whenever a new employee object receives an ID.

A static data member is declared inside the class and
defined outside the class.

=========================================================
*/

#include <iostream>
using namespace std;

class employee
{
private:
    // Static data member shared by all objects
    static int count;

    // Employee data members
    int id;
    string name;
    string department;

public:

    // Function to input employee details
    void getdata()
    {
        cout << "Enter the name: ";
        cin >> name;

        cout << "Enter the department: ";
        cin >> department;

        // Assign a unique employee ID
        id = ++count;
    }

    // Function to display employee details
    void display()
    {
        cout << "Employee ID   : " << id << endl;
        cout << "Employee Name : " << name << endl;
        cout << "Department    : " << department << endl;
    }
};

// Definition and initialization of static data member
int employee::count = 145;

int main()
{
    // Creating five employee objects
    employee i1, i2, i3, i4, i5;

    // Input and display details of employee 1
    i1.getdata();
    i1.display();

    // Input and display details of employee 2
    i2.getdata();
    i2.display();

    // Input and display details of employee 3
    i3.getdata();
    i3.display();

    // Input and display details of employee 4
    i4.getdata();
    i4.display();

    // Input and display details of employee 5
    i5.getdata();
    i5.display();

    return 0;
}
```
