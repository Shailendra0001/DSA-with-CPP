#include <iostream>
using namespace std;

int main() {

    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int largest = arr[0];
    int secondLargest = -1;

    for(int i = 1; i < n; i++) {

        if(arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        }
        else if(arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    cout << "Largest = " << largest << endl;
    cout << "Second Largest = " << secondLargest << endl;

    return 0;
}