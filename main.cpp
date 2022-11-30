#include <iostream>
#include "lib.h"
using namespace std;

int main(){
 
  int n;
    cin >>n;
    bool a = numeriprimi (n);

    if (a == false) {
        cout << "numero non primo" << endl;
    }
    else if (a == true) {
        cout << "numero primo" << endl;
    }

  return 0;
}
