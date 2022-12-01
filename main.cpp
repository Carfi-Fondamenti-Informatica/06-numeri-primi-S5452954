#include <iostream>
#include "lib.h"
using namespace std;

int main(){
 
  int numero=0;
    cin >> numero;
    bool a = numeriprimi (numero);

    if (a == false) {
        cout << "numero non primo" << endl;
    }
    else if (a == true) {
        cout << "numero primo" << endl;
    }

  return 0;
}
