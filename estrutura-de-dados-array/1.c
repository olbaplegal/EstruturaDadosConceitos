#include <stdio.h>

int main() {
    int vetor[20];
    int tamanho;
    int i;

    printf("Digite o tamanho do vetor (max 20): ");
    scanf("%d", &tamanho);

    if (tamanho > 20) {
        printf("Tamanho excede o limite do vetor.\n");
        return 1;
    }

    for (i = 0; i < tamanho; i++) {
        printf("Digite o valor para o indice %d: ", i); 
        scanf("%d", &vetor[i]);
    }

    printf("\nVetor preenchido:\n");
    for (i = 0; i < tamanho; i++)
        printf("%d ", vetor[i]);  
    printf("\n");

    return 0;
}

//Escreva um programa para ler e exibir n n?meros usando uma matriz.

