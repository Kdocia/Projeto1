#include <stdio.h>
#include "maximoValor.h"

// Segunda função: Encontrar o valor máximo

double maximoValor(double array[], int tamanho){
    double vmax = array[0];
    for (int i=1; i < tamanho; i++) {
        if (array[i] > vmax) {
            vmax = array[i];
        }
    }
    return vmax;
}
