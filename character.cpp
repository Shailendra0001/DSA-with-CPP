#include<iostream>
using namespace std;

int main(){

    char ch;
    cout << "enter alphabet : ";
    cin >> ch;

    if('a'<=ch && 'z'>=ch){
        cout << "lower case";
    }else if (ch>='A' && ch<='Z'){
        cout << "upper case";
    }

    return 0;
}