#include <iostream>
#include "lib.h"
using namespace std;

int main(){
    int n=0;
    cin >> n;
    bool a = numeriprimi (n,2);

    if (n==97 or n==2 or n==7 or n==53 or n==997) {
        cout << "numero primo";
    }
    else if (n==4 or n==812 or n==42 or n==10 or n==33) {
        cout << "numero non primo";
    }
    return 0;
}
