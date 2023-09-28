#include <stdio.h>

#include "Somar.h"
#include "maximoValor.h"
#include "media.h"

int main(){
    int tamanhoArray;

    //Definição do array:
    printf("Digite o tamanho do array:");
    scanf("%d", &tamanhoArray);

    double realArray[tamanhoArray];

    for (int i = 0; i < tamanhoArray; i++){
        printf("Digite o valor para o elemento %d:", i+1);
        scanf("%lf", &realArray[i]);
    }

    // Definição dos valores de cada função
    double soma = somar(realArray,tamanhoArray);
    double vmaximo = maximoValor(realArray, tamanhoArray);
    double vmedia = media(realArray, tamanhoArray);

    // Print dos resultados
    printf("A soma dos elementos: %lf\n", soma);
    printf("O valor máximo: %lf\n", vmaximo);
    printf("A média dos elementos: %lf\n", vmedia);

    return 0;
}
