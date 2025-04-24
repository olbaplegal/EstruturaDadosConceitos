#include <stdio.h>

int main() {
    int n, i, num, pos;
    
    // Solicita o tamanho da matriz ordenada
    printf("Digite o tamanho da matriz ordenada: ");
    scanf("%d", &n);
    
    if (n <= 0) {
        printf("Tamanho inválido. Deve ser maior que zero.\n");
        return 1;
    }
    
    int matriz[n + 1]; // +1 para o novo elemento
    
    // Lê a matriz ordenada
    printf("Digite os %d elementos da matriz em ordem crescente:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &matriz[i]);
        // Verifica se a matriz está realmente ordenada
        if (i > 0 && matriz[i] < matriz[i-1]) {
            printf("Erro: A matriz não está em ordem crescente.\n");
            return 1;
        }
    }
    
    // Solicita o número a ser inserido
    printf("Digite o número a ser inserido: ");
    scanf("%d", &num);
    
    // Encontra a posição correta para inserção
    pos = 0;
    while (pos < n && num > matriz[pos]) {
        pos++;
    }
    
    // Desloca os elementos para abrir espaço
    for (i = n; i > pos; i--) {
        matriz[i] = matriz[i - 1];
    }
    
    // Insere o novo número na posição correta
    matriz[pos] = num;
    
    // Exibe a matriz resultante
    printf("Matriz após a inserção (mantendo a ordem):\n");
    for (i = 0; i < n + 1; i++) {
        printf("%d ", matriz[i]);
    }
    printf("\n");
    
    return 0;
}
//Escreva um programa para inserir um número em uma matriz que já esteja classificada em ordem crescente
