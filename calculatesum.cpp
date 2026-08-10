#include <iostream>
using namespace std;

 int main() {

    int n;
    cout << "enter number : ";
    cin >> n;

    int sum = 0;

    while (n>0){
        int lastDigit = n%10;
        n = n/10;
        sum = sum + lastDigit;
    }

    cout << "sum =" << sum << endl;
    
    return 0;
 }