#include <stdio.h>
#include "media.h"
#include "Somar.h"

// Terceira função: Realiza a média dos elementos do array

double media(double array[], int tamanho){
    double soma = somar(array, tamanho);
    double media = soma / tamanho;
    return media;
}
