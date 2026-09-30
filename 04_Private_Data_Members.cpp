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

Program Title : Student Details Using Private Data Members

Concept Used:
- Class and Object
- Private Data Members
- Public Member Functions
- Scope Resolution Operator (::)
- Encapsulation

Description:
This program demonstrates the use of private data members
inside a class. The student name and age are declared as
private members and cannot be accessed directly from the
main() function.

The SetData() and DisplayData() member functions are used
to input and display the student details. SetData() is
defined outside the class using the scope resolution
operator (::).

=========================================================
*/

#include <iostream>
using namespace std;

// Class definition
class student
{
private:
    // Private data members
    string name;
    int age;

public:
    // Member function declaration
    void SetData();

    // Member function to display student details
    void DisplayData()
    {
        cout << "Name = " << name << endl;
        cout << "Age  = " << age << endl;
    }
};

// Member function defined outside the class
void student::SetData()
{
    cout << "Enter the student name: ";
    cin >> name;

    cout << "Enter the age: ";
    cin >> age;
}

int main()
{
    // Creating an object of student class
    student o1;

    // Taking student details as input
    o1.SetData();

    // Displaying student details
    o1.DisplayData();

    return 0;
}
```
