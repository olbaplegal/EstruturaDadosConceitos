#include <stdio.h>

int main() {
    int tamanho, posicao, numero;
    
    // Solicita o tamanho da matriz
    printf("Digite o tamanho da matriz: ");
    scanf("%d", &tamanho);
    
    if (tamanho <= 0) {
        printf("Tamanho inválido. Deve ser maior que zero.\n");
        return 1;
    }
    
    int matriz[tamanho + 1]; // +1 para o novo elemento
    
    // Lê os elementos da matriz original
    printf("Digite os %d elementos da matriz:\n", tamanho);
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &matriz[i]);
    }
    
    // Solicita o número a ser inserido e a posição
    printf("Digite o número a ser inserido: ");
    scanf("%d", &numero);
    
    printf("Digite a posição para inserir (0 a %d): ", tamanho);
    scanf("%d", &posicao);
    
    // Verifica se a posição é válida
    if (posicao < 0 || posicao > tamanho) {
        printf("Posição inválida!\n");
        return 1;
    }
    
    // Desloca os elementos para abrir espaço
    for (int i = tamanho; i > posicao; i--) {
        matriz[i] = matriz[i - 1];
    }
    
    // Insere o novo número
    matriz[posicao] = numero;
    
    // Exibe a matriz resultante
    printf("Matriz após a inserção:\n");
    for (int i = 0; i < tamanho + 1; i++) {
        printf("%d ", matriz[i]);
    }
    printf("\n");
    
    return 0;
}
//Escreva um programa para inserir um número em um determinado local em uma matriz.
