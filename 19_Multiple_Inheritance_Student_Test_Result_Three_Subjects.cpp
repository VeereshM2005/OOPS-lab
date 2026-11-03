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

Program Title : Student Result Calculation Using
                Multiple Inheritance (Three Subjects)

Concept Used:
- Class and Object
- Multiple Inheritance
- Base Class and Derived Class
- Public Inheritance
- Protected Access Specifier
- Parameterized Constructor
- Constructor Initializer List
- Array
- For Loop
- User Input
- Data Members
- Member Functions
- Total Marks Calculation
- Percentage Calculation

Description:
This program demonstrates multiple inheritance.

The Student class stores roll number and name.
The Test class stores marks of three subjects.
The Result class inherits from both Student
and Test.

The Result class calculates total marks and
percentage and displays student information.

=========================================================
*/

#include <iostream>
#include <string>
using namespace std;

// Base class 1
class Student
{
protected:
    int roll_no;
    string name;

public:

    // Parameterized constructor
    Student(int roll, string studentName)
        : roll_no(roll), name(studentName)
    {
        cout << "Student class constructor called"
             << " with roll number: " << roll_no
             << " and name: " << name << endl;
    }

    // Display student details
    void displayStudent()
    {
        cout << "Roll Number: " << roll_no << endl;
        cout << "Name: " << name << endl;
    }
};

// Base class 2
class Test
{
protected:
    int marks[3];

public:

    // Input marks of three subjects
    void inputTest()
    {
        for (int i = 0; i < 3; i++)
        {
            cout << "Enter marks for subject "
                 << i + 1 << ": ";

            cin >> marks[i];
        }
    }

    // Display subject marks
    void displayTest()
    {
        for (int i = 0; i < 3; i++)
        {
            cout << "Marks for subject "
                 << i + 1 << ": "
                 << marks[i] << endl;
        }
    }
};

// Derived class
class Result : public Student, public Test
{
public:

    // Constructor initializer list
    Result(int roll, string studentName)
        : Student(roll, studentName)
    {
    }

    // Calculate total marks
    int calculateTotal()
    {
        return marks[0] + marks[1] + marks[2];
    }

    // Calculate percentage
    double calculatePercentage()
    {
        return calculateTotal() / 3.0;
    }

    // Display complete result
    void displayResult()
    {
        displayStudent();

        displayTest();

        cout << "Total Marks: "
             << calculateTotal() << endl;

        cout << "Percentage: "
             << calculatePercentage() << "%"
             << endl;
    }
};

int main()
{
    // Creating Result object
    Result r(515, "Vrunda");

    // Input subject marks
    r.inputTest();

    // Display student result
    r.displayResult();

    return 0;
}
```
