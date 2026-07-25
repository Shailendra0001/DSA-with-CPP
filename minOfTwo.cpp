#include <iostream>
using namespace std;

int minOftwo(int a, int b){
    if(a>b){
        return b;
    } else {
        return a;
    }

}

    int main () {

        cout << minOftwo(10, 11) << endl;
        return 0;
    }
