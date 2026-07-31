#include <iostream>
using namespace std;

// Function to print pyramid
void printPyramid(int n)
{
    for (int i = 1; i <= n; i++)
    {
        // Print spaces
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }

        // Print stars
        for (int j = 1; j <= (2 * i - 1); j++)
        {
            cout << "*";
        }

        cout << endl;
    }
}

int main()
{
    int n;

    cout << "Enter number of rows: ";
    cin >> n;

    printPyramid(n);

    return 0;
}