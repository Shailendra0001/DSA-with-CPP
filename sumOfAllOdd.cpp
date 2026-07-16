#include<iostream>
using namespace std;

int main() {

    int n;
    cout << "enter number : " ;
    cin >> n;

    int sum = 0;

    for(int i=1; i<=n; i++){
        if(i%2!=0){
            sum = sum + i;
        }
    }
    cout << "sum of odd numbers upto n is : " << sum << endl;

    return 0;
}