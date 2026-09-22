#include <iostream>
using namespace std;

// Inline function
inline int square(int x) {
    return x * x;
}

// Function with default arguments
int add(int a, int b = 0, int c = 0) {
    return a + b + c;
}

// Function overloading
int multiply(int a, int b) {
    return a * b;
}

double multiply(double a, double b) {
    return a * b;
}

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    // Inline function demonstration
    cout << "Square of " << num << " = " << square(num) << endl;

    // Default arguments demonstration
    cout << "add(10) = " << add(10) << endl;
    cout << "add(10, 20) = " << add(10, 20) << endl;
    cout << "add(10, 20, 30) = " << add(10, 20, 30) << endl;

    // Function overloading demonstration
    cout << "multiply(5, 4) = " << multiply(5, 4) << endl;
    cout << "multiply(2.5, 3.2) = " << multiply(2.5, 3.2) << endl;

    return 0;
}