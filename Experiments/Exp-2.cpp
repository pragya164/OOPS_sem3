#include <iostream>
using namespace std;

void value(int x) {
    x = x + 5;
    cout << "Inside Call by Value: " << x << endl;
}

void reference(int &x) {
    x = x + 5;
    cout << "Inside Call by Reference: " << x << endl;
}

void address(int *x) {
    *x = *x + 5;
    cout << "Inside Call by Address: " << *x << endl;
}

int main() {
    int num = 10;

    cout << "Original Value: " << num << endl;

    value(num);
    cout << "After Call by Value: " << num << endl;

    reference(num);
    cout << "After Call by Reference: " << num << endl;

    address(&num);
    cout << "After Call by Address: " << num << endl;

    return 0;
}