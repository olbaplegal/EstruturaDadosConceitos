#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    
    printf("Digite o número de elementos: ");
    scanf("%d", &n);
    
    if (n < 2) {
        printf("E necessario pelo menos 2 elementos para encontrar o segundo maior.\n");
        return 1;
    }
    
    int numeros[n];
    
    printf("Digite %d numeros:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &numeros[i]);
    }
    
    int maior = INT_MIN;
    int segundoMaior = INT_MIN;
    
    for (int i = 0; i < n; i++) {
        if (numeros[i] > maior) {
            segundoMaior = maior;
            maior = numeros[i];
        } else if (numeros[i] > segundoMaior && numeros[i] != maior) {
            segundoMaior = numeros[i];
        }
    }
    
    if (segundoMaior == INT_MIN) {
        printf("Todos os numeros sao iguais. Nao ha segundo maior.\n");
    } else {
        printf("O segundo maior numero e: %d\n", segundoMaior);
    }
    
    return 0;
}

//Escreva um programa para encontrar o segundo maior de n números usando uma matriz.