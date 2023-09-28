#include <stdio.h>

// Primeira função: Soma todos os elementos definidos no array

double somar(double array[], int tamanho){
    double soma = 0.0;
    for (int i=0; i<tamanho; i++){
        soma += array[i];
    }
    return soma;
}

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

// Terceira função: Realiza a média dos elementos do array
double media(double array[], int tamanho){
    double soma = somar(array, tamanho);
    double media = soma / tamanho;
    return media;
}

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
