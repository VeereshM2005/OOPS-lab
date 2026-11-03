```cpp
/*
Name       : Veeresh B Muragod
Roll No    : 116
Division   : A
SRN        : 01FE24BEC416
Semester   : 7th Semester

Program 33: Unary Operator Overloading - Decrement
Concept: Prefix and Postfix Decrement Operators
Description:
Demonstrates prefix and postfix decrement using operator
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

    // Prefix decrement: --c
    Counter& operator--() {
        val--;
        return *this;
    }

    // Postfix decrement: c--
    Counter operator--(int) {
        Counter temp = *this;
        val--;
        return temp;
    }

    int get() {
        return val;
    }
};

int main() {
    Counter c;

    // Postfix decrement
    c--;
    cout << "After postfix decrement: " << c.get() << endl;

    // Prefix decrement
    --c;
    cout << "After prefix decrement: " << c.get() << endl;

    return 0;
}
```
