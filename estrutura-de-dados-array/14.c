#include <stdio.h>

int main() {
    int n;
    
    // Solicita o tamanho da matriz
    printf("Digite o tamanho da matriz: ");
    scanf("%d", &n);
    
    if (n <= 0) {
        printf("Tamanho inválido. Deve ser maior que zero.\n");
        return 1;
    }
    
    int matriz[n];
    
    // Lê os elementos da matriz
    printf("Digite os %d elementos da matriz:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &matriz[i]);
    }
    
    // Encontra a posição do menor e do maior elemento
    int pos_menor = 0, pos_maior = 0;
    
    for (int i = 1; i < n; i++) {
        if (matriz[i] < matriz[pos_menor]) {
            pos_menor = i;
        }
        if (matriz[i] > matriz[pos_maior]) {
            pos_maior = i;
        }
    }
    
    // Exibe os valores antes da troca
    printf("\nAntes da troca:\n");
    printf("Menor elemento: %d (posição %d)\n", matriz[pos_menor], pos_menor);
    printf("Maior elemento: %d (posição %d)\n", matriz[pos_maior], pos_maior);
    
    // Troca os elementos
    if (pos_menor != pos_maior) {  // Só troca se forem diferentes
        int temp = matriz[pos_menor];
        matriz[pos_menor] = matriz[pos_maior];
        matriz[pos_maior] = temp;
    }
    
    // Exibe a matriz após a troca
    printf("\nApós a troca:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", matriz[i]);
    }
    printf("\n");
    
    // Exibe os novos valores
    printf("\nDepois da troca:\n");
    printf("Menor elemento agora está na posição %d: %d\n", pos_maior, matriz[pos_maior]);
    printf("Maior elemento agora está na posição %d: %d\n", pos_menor, matriz[pos_menor]);
    
    return 0;
}
//Escreva um programa para trocar o maior e o menor número em uma matriz.
