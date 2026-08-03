#include <iostream>
using namespace std;

float areaOfRhombus(float d1, float d2) {
    return (d1 * d2) / 2;
}

int main() {
    float d1, d2;

    cout << "Enter first diagonal: ";
    cin >> d1;

    cout << "Enter second diagonal: ";
    cin >> d2;

    cout << "Area of Rhombus = " << areaOfRhombus(d1, d2);

    return 0;
}