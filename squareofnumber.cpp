#include <iostream>
using namespace std;

int square(int num) {
    return num * num;
}

int main() {
    int n;

    cout << "Enter a number: ";
    cin >> n;

    cout << "Square of " << n << " is " << square(n);

    return 0;
}