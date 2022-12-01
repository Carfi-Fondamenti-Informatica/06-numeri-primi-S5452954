#include "lib.h"

bool numeriprimi (int numero) {
    int div = 1;
    int conta = 0;

    while (conta < 3 && div <= numero / 2) {
        if (numero % div == 0) {
            conta = conta + 1;
            div = div + 1;
        }

    }
    if (conta == 1) {
        return true;
    } else {
        return false;
    }
}
