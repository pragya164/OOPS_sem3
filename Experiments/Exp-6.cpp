#include <iostream>
using namespace std;

class Demo {
private:
    int value;

public:
    // Default Constructor
    Demo() {
        value = 0;
        cout << "Default Constructor Called" << endl;
    }

    // Parameterized Construc
    Demo(int v) {
        value = v;
        cout << "Parameterized Constructor Called" << endl;
    }

    // Copy Constructor
    Demo(const Demo &obj) {
        value = obj.value;
        cout << "Copy Constructor Called" << endl;
    }

    // Destructor
    ~Demo() {
        cout << "Destructor Called for value = " << value << endl;
    }

    void display() {
        cout << "Value = " << value << endl;
    }
};

int main() {
    cout << "Creating Object 1" << endl;
    Demo obj1;          // Default constructor
    obj1.display();

    cout << "\nCreating Object 2" << endl;
    Demo obj2(10);      // Parameterized constructor
    obj2.display();

    cout << "\nCreating Object 3" << endl;
    Demo obj3 = obj2;   // Copy constructor
    obj3.display();

    cout << "\nEnd of main function" << endl;

    return 0;
}