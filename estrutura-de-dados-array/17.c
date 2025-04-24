#include <stdio.h>

// Função para calcular o fatorial
long fatorial(int n) {
    long f = 1;
    for (int i = 1; i <= n; i++) {
        f *= i;
    }
    return f;
}

// Função para calcular combinação (n choose k)
long combinacao(int n, int k) {
    return fatorial(n) / (fatorial(k) * fatorial(n - k));
}

int main() {
    int linhas;
    
    // Solicita o número de linhas do Triângulo de Pascal
    printf("Digite o número de linhas do Triângulo de Pascal (1-20): ");
    scanf("%d", &linhas);
    
    if (linhas < 1 || linhas > 20) {
        printf("Número inválido. Deve ser entre 1 e 20.\n");
        return 1;
    }
    
    printf("\nTriângulo de Pascal com %d linhas:\n\n", linhas);
    
    // Método 1: Usando combinações (n choose k)
    printf("Método 1 - Usando combinações:\n");
    for (int n = 0; n < linhas; n++) {
        // Imprime espaços para centralizar
        for (int s = 0; s < linhas - n - 1; s++) {
            printf("  ");
        }
        
        for (int k = 0; k <= n; k++) {
            printf("%4ld", combinacao(n, k));
        }
        printf("\n");
    }
    
    // Método 2: Usando abordagem iterativa (mais eficiente)
    printf("\nMétodo 2 - Usando abordagem iterativa:\n");
    int triangulo[linhas][linhas];
    
    // Preenche o triângulo
    for (int n = 0; n < linhas; n++) {
        // Imprime espaços para centralizar
        for (int s = 0; s < linhas - n - 1; s++) {
            printf("  ");
        }
        
        for (int k = 0; k <= n; k++) {
            if (k == 0 || k == n) {
                triangulo[n][k] = 1;
            } else {
                triangulo[n][k] = triangulo[n-1][k-1] + triangulo[n-1][k];
            }
            printf("%4d", triangulo[n][k]);
        }
        printf("\n");
    }
    
    return 0;
}
//Escreva um programa para gerar o triângulo de Pascal.
