#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Creating a collection (vector)
    vector<int> numbers = {10, 20, 30, 40, 50};

    cout << "Elements of the collection are:" << endl;

    // Range-based for loop with auto
    for (auto num : numbers) {
        cout << num << " ";
    }

    cout << endl;

    return 0;
}