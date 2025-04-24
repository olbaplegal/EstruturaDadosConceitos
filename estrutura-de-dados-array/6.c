#include <stdio.h>

int contemDuplicados(int matriz[], int tamanho) {
    // Verifica cada elemento com todos os elementos seguintes
    for (int i = 0; i < tamanho - 1; i++) {
        for (int j = i + 1; j < tamanho; j++) {
            if (matriz[i] == matriz[j]) {
                return 1; // Encontrou um duplicado
            }
        }
    }
    return 0; // Não encontrou duplicados
}

int main() {
    int n;
    
    // Solicita o tamanho da matriz
    printf("Digite o tamanho da matriz: ");
    scanf("%d", &n);
    
    if (n <= 0) {
        printf("O tamanho da matriz deve ser positivo.\n");
        return 1;
    }
    
    int matriz[n];
    
    // Lê os elementos da matriz
    printf("Digite os %d elementos da matriz:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &matriz[i]);
    }
    
    // Verifica se há duplicados
    if (contemDuplicados(matriz, n)) {
        printf("A matriz contém elementos duplicados.\n");
    } else {
        printf("A matriz NÃO contém elementos duplicados.\n");
    }
    
    return 0;
}
//Escreva um programa para descobrir se a matriz de inteiros contém um número duplicado.
