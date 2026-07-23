 #include <iostream>
using namespace std;

// Function to calculate area of square
int areaOfSquare(int side) {
    return side * side;
}

int main() {

    int side;

    cout << "Enter side of square: ";
    cin >> side;

    int area = areaOfSquare(side);

    cout << "Area of square is: " << area;

    return 0;
}