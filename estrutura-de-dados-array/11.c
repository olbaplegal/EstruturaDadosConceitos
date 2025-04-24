#include <stdio.h>

int main() {
    int n1, n2;
    
    // Solicita o tamanho da primeira matriz
    printf("Digite o tamanho da primeira matriz: ");
    scanf("%d", &n1);
    
    // Solicita o tamanho da segunda matriz
    printf("Digite o tamanho da segunda matriz: ");
    scanf("%d", &n2);
    
    // Verifica tamanhos válidos
    if (n1 <= 0 || n2 <= 0) {
        printf("Tamanhos devem ser maiores que zero.\n");
        return 1;
    }
    
    int matriz1[n1], matriz2[n2];
    int matrizResultado[n1 + n2];
    
    // Lê os elementos da primeira matriz
    printf("Digite os %d elementos da primeira matriz:\n", n1);
    for (int i = 0; i < n1; i++) {
        scanf("%d", &matriz1[i]);
    }
    
    // Lê os elementos da segunda matriz
    printf("Digite os %d elementos da segunda matriz:\n", n2);
    for (int i = 0; i < n2; i++) {
        scanf("%d", &matriz2[i]);
    }
    
    // Mescla as duas matrizes
    // Primeiro copia todos os elementos da primeira matriz
    for (int i = 0; i < n1; i++) {
        matrizResultado[i] = matriz1[i];
    }
    
    // Depois copia todos os elementos da segunda matriz
    for (int i = 0; i < n2; i++) {
        matrizResultado[n1 + i] = matriz2[i];
    }
    
    // Exibe a matriz resultante
    printf("Matriz resultante da mesclagem:\n");
    for (int i = 0; i < n1 + n2; i++) {
        printf("%d ", matrizResultado[i]);
    }
    printf("\n");
    
    return 0;
}
//Escreva um programa para mesclar duas matrizes não classificadas.
