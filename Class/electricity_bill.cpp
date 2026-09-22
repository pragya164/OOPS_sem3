#include <iostream>
using namespace std;

class ElectricityBill {
private:
    string customerName;
    int unitsConsumed;
    double ratePerUnit;

public:
    ElectricityBill(string name, int units, double rate) {
        customerName = name;
        unitsConsumed = units;
        ratePerUnit = rate;
    }

    double calculateBill() {
        return unitsConsumed * ratePerUnit;
    }

    void displayBill() {
        cout << "Customer Name: " << customerName << endl;
        cout << "Units Consumed: " << unitsConsumed << endl;
        cout << "Rate per Unit: $" << ratePerUnit << endl;
        cout << "Total Bill: $" << calculateBill() << endl;
    }
};

int main() {
    ElectricityBill bill("John Doe", 150, 0.12);
    bill.displayBill();
    return 0;
}