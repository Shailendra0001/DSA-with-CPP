#include <iostream>
using namespace std;

int main() {

    int a = 10;
    int *ptr = &a;

    cout << "Value of a: " << a << endl;
    cout << "Value using pointer: " << *ptr << endl;

    return 0;
}