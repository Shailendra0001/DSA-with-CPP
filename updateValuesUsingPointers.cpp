#include <iostream>
using namespace std;

void updateValue(int *ptr) {
    *ptr = 100;
}

int main() {
    int num = 25;

    cout << "Before: " << num << endl;

    updateValue(&num);

    cout << "After: " << num << endl;

    return 0;
}