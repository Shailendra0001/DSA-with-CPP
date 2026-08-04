#include <iostream>
using namespace std;

void printPattern(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = i; j <= n; j++) {
            cout << i;
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;

    printPattern(n);

    return 0;
}