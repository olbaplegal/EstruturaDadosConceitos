#include <stdio.h>

int main() {
    int tamanho, posicao;
    
    // Solicita o tamanho da matriz
    printf("Digite o tamanho da matriz: ");
    scanf("%d", &tamanho);
    
    if (tamanho <= 0) {
        printf("Tamanho inválido. Deve ser maior que zero.\n");
        return 1;
    }
    
    int matriz[tamanho];
    
    // Lê os elementos da matriz
    printf("Digite os %d elementos da matriz:\n", tamanho);
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &matriz[i]);
    }
    
    // Solicita a posição a ser removida
    printf("Digite a posição para remover (0 a %d): ", tamanho - 1);
    scanf("%d", &posicao);
    
    // Verifica se a posição é válida
    if (posicao < 0 || posicao >= tamanho) {
        printf("Posição inválida!\n");
        return 1;
    }
    
    // Desloca os elementos para preencher o espaço vazio
    for (int i = posicao; i < tamanho - 1; i++) {
        matriz[i] = matriz[i + 1];
    }
    
    // Exibe a matriz resultante
    printf("Matriz após a remoção:\n");
    for (int i = 0; i < tamanho - 1; i++) {
        printf("%d ", matriz[i]);
    }
    printf("\n");
    
    return 0;
}
//Escreva um programa para excluir um número de um determinado local em uma matriz.
