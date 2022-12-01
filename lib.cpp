//
// Created by Amministratore on 30/11/2022.
//

#include "lib.h"

bool numeriprimi (int n, int i) {
    for (i = 2; i < n; i++) {
        if (n % i == 0) {
            return false;
        } else {
            return true;
        }
    }
}


