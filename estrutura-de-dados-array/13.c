#include<stdio.h>
int main() {
    int matriz[20];
    int tamanho; int i; int menor = 0; int menorPos = 0;

    printf("Digite o tamanho da matriz (max 20): ");
    scanf("%d", &tamanho);

    if (tamanho > 20) {
        printf("Tamanho excede o limite do matriz.\n");
        return 1;
    }

    for (i = 0; i < tamanho; i++) {
        printf("Digite o valor para o indice %d: ", i); 
        scanf("%d", &matriz[i]);
    }

    printf("\nmatriz preenchido:\n");
    menor = matriz[0];
    for (i = 0; i < tamanho; i++){
        printf("%d ", matriz[i]);  
        if (matriz[i] < menor){
            menor = matriz[i]; 
            menorPos = i;
        }  
    }

    printf("\n");
    
    printf("menor numero da matriz: %d", menor);
    printf("\nindice do menor %d", menorPos);
    
    return 0;
}
//Escreva um programa para ler uma matriz de n números e, em seguida, encontre o menor número.
