#include<iostream>
using namespace std;

int main (){
    
    int n;
    cout << "enter number : ";
    cin >> n;

    int sum = 0;
    for (int i=1; i<=n; i++){
        sum = sum + i;
    }
    cout << "sum upto n number is : " << sum;

    return 0;
}