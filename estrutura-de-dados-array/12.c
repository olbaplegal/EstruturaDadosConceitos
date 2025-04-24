#include <stdio.h>
#include <stdlib.h>

int main() {
    int n1, n2;
    
    printf("Digite o tamanho da primeira matriz: ");
    scanf("%d", &n1);
    
    printf("Digite o tamanho da segunda matriz: ");
    scanf("%d", &n2);
    
    if (n1 <= 0 || n2 <= 0) {
        printf("Tamanhos devem ser maiores que zero.\n");
        return 1;
    }
    
    int *matriz1 = malloc(n1 * sizeof(int));
    int *matriz2 = malloc(n2 * sizeof(int));
    int *matrizResultado = malloc((n1 + n2) * sizeof(int));
    
    printf("Digite os %d elementos da primeira matriz:\n", n1);
    for (int i = 0; i < n1; i++) {
        scanf("%d", &matriz1[i]);
    }
    
    printf("Digite os %d elementos da segunda matriz:\n", n2);
    for (int i = 0; i < n2; i++) {
        scanf("%d", &matriz2[i]);
    }
    
    for (int i = 0; i < n1; i++) {
        matrizResultado[i] = matriz1[i];
    }
    
    for (int i = 0; i < n2; i++) {
        matrizResultado[n1 + i] = matriz2[i];
    }
    
    printf("Matriz resultante da mesclagem:\n");
    for (int i = 0; i < n1 + n2; i++) {
        printf("%d ", matrizResultado[i]);
    }
    printf("\n");
    
    free(matriz1);
    free(matriz2);
    free(matrizResultado);
    
    return 0;
}
//Escreva um programa para mesclar dois arrays classificados.
