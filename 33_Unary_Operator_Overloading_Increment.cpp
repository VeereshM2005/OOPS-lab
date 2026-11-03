```cpp
/*
Name       : Veeresh B Muragod
Roll No    : 116
Division   : A
SRN        : 01FE24BEC416
Semester   : 7th Semester

Program 32: Unary Operator Overloading - Increment
Concept: Prefix and Postfix Increment Operators
Description:
Demonstrates prefix and postfix increment using operator
overloading.
*/

#include <iostream>
using namespace std;

class Counter {
    int val;

public:
    Counter(int v = 0) {
        val = v;
    }

    // Prefix increment: ++c
    Counter& operator++() {
        val++;
        return *this;
    }

    // Postfix increment: c++
    Counter operator++(int) {
        Counter temp = *this;
        val++;
        return temp;
    }

    int get() {
        return val;
    }
};

int main() {
    Counter c;

    // Postfix increment
    c++;
    cout << "After postfix increment: " << c.get() << endl;

    // Prefix increment
    ++c;
    cout << "After prefix increment: " << c.get() << endl;

    return 0;
}
```
