#include <stdio.h>
#include <math.h>

int main() {
    int n;
    
    // Solicita ao usuário o número de dígitos
    printf("Digite quantos dígitos deseja inserir: ");
    scanf("%d", &n);
    
    if (n <= 0) {
        printf("O número de dígitos deve ser positivo.\n");
        return 1;
    }
    
    int digitos[n];
    int numero = 0;
    
    // Lê os dígitos um por um
    printf("Digite os %d dígitos (um por linha):\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &digitos[i]);
        
        // Verifica se é realmente um dígito (0-9)
        if (digitos[i] < 0 || digitos[i] > 9) {
            printf("Erro: %d não é um dígito válido (0-9).\n", digitos[i]);
            return 1;
        }
    }
    
    // Constrói o número a partir dos dígitos
    for (int i = 0; i < n; i++) {
        numero = numero * 10 + digitos[i];
    }
    
    printf("O número formado é: %d\n", numero);
    
    return 0;
}
//Escreva um programa para inserir n números de dígitos. Forme um número usando esses dígitos.

//não entendi o enunciado. é para soma os números? contatenar????
