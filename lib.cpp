#include "lib.h"

bool numeriprimi (int n) {

    for (int i=2; i<=n; i++) {
        int divisione;
        divisione = n/i;
        if (n % i == 0) {
            return false;
        }
        else {
            return true;
        }
    }
    
}
