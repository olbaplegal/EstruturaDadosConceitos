#include <stdio.h>

int main() {
    int n, num, pos = -1;
    
    // Solicita o tamanho da matriz ordenada
    printf("Digite o tamanho da matriz ordenada: ");
    scanf("%d", &n);
    
    if (n <= 0) {
        printf("Tamanho inválido. Deve ser maior que zero.\n");
        return 1;
    }
    
    int matriz[n];
    
    // Lê a matriz ordenada
    printf("Digite os %d elementos da matriz em ordem crescente:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &matriz[i]);
        // Verifica se a matriz está realmente ordenada
        if (i > 0 && matriz[i] < matriz[i-1]) {
            printf("Erro: A matriz não está em ordem crescente.\n");
            return 1;
        }
    }
    
    // Solicita o número a ser removido
    printf("Digite o número a ser removido: ");
    scanf("%d", &num);
    
    // Busca binária para encontrar a posição do número
    int inicio = 0, fim = n - 1;
    while (inicio <= fim) {
        int meio = inicio + (fim - inicio) / 2;
        
        if (matriz[meio] == num) {
            pos = meio;
            break;
        } else if (matriz[meio] < num) {
            inicio = meio + 1;
        } else {
            fim = meio - 1;
        }
    }
    
    // Verifica se o número foi encontrado
    if (pos == -1) {
        printf("O número %d não foi encontrado na matriz.\n", num);
        return 0;
    }
    
    // Remove o número deslocando os elementos
    for (int i = pos; i < n - 1; i++) {
        matriz[i] = matriz[i + 1];
    }
    
    // Exibe a matriz resultante
    printf("Matriz após a remoção (mantendo a ordem):\n");
    for (int i = 0; i < n - 1; i++) {
        printf("%d ", matriz[i]);
    }
    printf("\n");
    
    return 0;
}
//Escreva um programa para excluir um número de uma matriz que já está classificada em ordem crescente.
