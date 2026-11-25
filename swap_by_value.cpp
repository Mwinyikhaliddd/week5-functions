#include <iostream>
using namespace std;

// Pass-by-value: receives COPIES of a and b
void swapByValue(int a, int b) {
    cout << "  Inside swapByValue - Before swap: a = " << a << ", b = " << b << endl;
    int temp = a;
    a = b;
    b = temp;
    cout << "  Inside swapByValue - After swap:  a = " << a << ", b = " << b << endl;
}

// Step 6 Challenge: Pass-by-reference using & modifies the ORIGINAL variables
void swapByReference(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 10;
    int y = 20;

    cout << "Before calling swapByValue:" << endl;
    cout << "  x = " << x << ", y = " << y << endl;

    swapByValue(x, y);

    cout << "After calling swapByValue:" << endl;
    cout << "  x = " << x << ", y = " << y << endl;
    cout << "Explanation: The function received COPIES of x and y.\n" << endl;

    // Testing Step 6 Fix
    cout << "Calling swapByReference(x, y)..." << endl;
    swapByReference(x, y);
    cout << "After calling swapByReference:" << endl;
    cout << "  x = " << x << ", y = " << y << " (Swapped!)" << endl;

    return 0;
}

