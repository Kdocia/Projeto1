#include <stdio.h>
#include "Somar.h"

// Primeira função: Soma todos os elementos definidos no array

double somar(double array[], int tamanho){
    double soma = 0.0;
    for (int i=0; i<tamanho; i++){
        soma += array[i];
    }
    return soma;
}
