#include <stdio.h>
#include <limits.h>
int main() {
int vetor[20]; int tamanho = 0; int menor = INT_MAX;int i = 0;
printf("Digite o tamanho do vetor (max 20): ");
scanf("%d", &tamanho);
if (tamanho > 20) 
{
    printf("Tamanho excede o limite do vetor.\n");
    return 1; // Encerra o programa com erro
}
for (i = 0; i < tamanho; i++) 
{
    printf("Digite o valor para o indice %d: ", i);
    scanf("%d", &vetor[i]); 
}
for (i = 0; i < tamanho; i++)
{
    if (vetor[i] < menor)
    {
        menor = vetor[i];
    }
}
printf("O menor numero no vetor e: %d", menor);
return 0;
}
