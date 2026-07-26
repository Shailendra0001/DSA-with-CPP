#include <iostream>
using namespace std;

// Function to print table of 2
void printTable() {
    for (int i = 1; i <= 10; i++) {
        cout << "2 x " << i << " = " << 2 * i << endl;
    }
}

int main() {
    printTable();   // Function call
    return 0;
}