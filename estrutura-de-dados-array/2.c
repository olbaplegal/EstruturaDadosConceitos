#include<stdio.h>
int main() {
    int matriz[20];
    int tamanho; int i; int soma = 0; float media;

    printf("Digite o tamanho da matriz (max 20): ");
    scanf("%d", &tamanho);

    if (tamanho > 20) {
        printf("Tamanho excede o limite do matriz.\n");
        return 1;
    }

    for (i = 0; i < tamanho; i++) {
        printf("Digite o valor para o indice %d: ", i); 
        scanf("%d", &matriz[i]);
    }

    printf("\nmatriz preenchido:\n");
    for (i = 0; i < tamanho; i++){
        printf("%d ", matriz[i]);  
        soma = soma + matriz[i];
    }
    printf("\n");

    media = soma / tamanho;

    printf("media dos numeros da matriz: %f", media);

    return 0;
}
//Escreva um programa para encontrar a média de n números usando matrizes.