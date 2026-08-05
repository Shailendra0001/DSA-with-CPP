#include <iostream>
using namespace std;

int main() {

    int a = 10;

    int *ptr = &a;   // pointer me a ka address store kiya

    cout << "Value of a: " << a << endl;

    cout << "Address of a: " << &a << endl;

    cout << "Value stored in pointer: " << ptr << endl;

    cout << "Value using pointer: " << *ptr << endl;

    return 0;
}