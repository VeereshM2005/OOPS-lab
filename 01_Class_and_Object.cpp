```cpp
/*
=========================================================
                    OOPS LAB PROGRAM
=========================================================

Name          : Veeresh B Muragod
Roll No       : 116
Division      : A
SRN           : 01FE24BEC416
Semester      : 7th sem

Program Title : Demonstration of Class and Object

Concept Used:
- Class
- Object
- Private Data Members
- Public Member Functions
- Encapsulation

Description:
This program demonstrates the basic concept of a class and
object in C++. A class named 'test' is created with private
data members 'mark' and 'spi'. Public member functions are
used to assign and display the values of these data members.

=========================================================
*/

#include <iostream>
using namespace std;

// Class definition
class test
{
private:
    // Private data members
    int mark;
    float spi;

public:

    // Function to assign values to data members
    void SetData()
    {
        mark = 270;
        spi = 6.5;
    }

    // Function to display the values
    void DisplayData()
    {
        cout << "Marks = " << mark << endl;
        cout << "SPI   = " << spi << endl;
    }
};

int main()
{
    // Creating an object of the test class
    test o1;

    // Calling member function using the object
    o1.SetData();

    // Displaying the stored data
    o1.DisplayData();

    return 0;
}
```
