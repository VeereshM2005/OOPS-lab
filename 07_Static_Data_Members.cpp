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

Program Title : Demonstration of Static Data Members

Concept Used:
- Class and Object
- Static Data Members
- Static Variables
- Member Functions
- Scope Resolution Operator (::)

Description:
This program demonstrates the use of static data members
in a C++ class.

The class contains three static data members:
1. count      - stores the employee ID count.
2. name       - stores the employee name.
3. department - stores the employee department.

Static data members are shared by all objects of the
class. Therefore, only one copy of each static data
member exists for the entire class.

=========================================================
*/

#include <iostream>
using namespace std;

class employee
{
private:
    // Static data members shared by all objects
    static int count;
    static string name;
    static string department;

    // Non-static data member
    int id;

public:

    // Function to input employee details
    void getdata()
    {
        cout << "Enter the name: ";
        cin >> name;

        cout << "Enter the department: ";
        cin >> department;

        // Assign a unique ID
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

// Definition and initialization of static data members
int employee::count = 145;
string employee::name;
string employee::department;

int main()
{
    // Creating employee objects
    employee i1, i2, i3, i4, i5;

    // Employee 1
    i1.getdata();
    i1.display();

    // Employee 2
    i2.getdata();
    i2.display();

    // Employee 3
    i3.getdata();
    i3.display();

    // Employee 4
    i4.getdata();
    i4.display();

    // Employee 5
    i5.getdata();
    i5.display();

    return 0;
}
```
