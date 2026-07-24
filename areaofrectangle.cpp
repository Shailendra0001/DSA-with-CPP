#include <iostream>
using namespace std;

// Function to calculate area
int areaOfRectangle(int length, int width)
{
    return length * width;
}

int main()
{
    int length, width;

    cout << "Enter length: ";
    cin >> length;

    cout << "Enter width: ";
    cin >> width;

    int area = areaOfRectangle(length, width);

    cout << "Area of Rectangle = " << area << endl;

    return 0;
}