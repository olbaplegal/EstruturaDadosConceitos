#include <stdio.h>
int main() {
int vetor[20]; int tamanho = 0; int soma = 0; int media = 0;
printf("Digite o tamanho do vetor (max 20): ");
scanf("%d", &tamanho);
if (tamanho > 20) 
{
    printf("Tamanho excede o limite do vetor.\n");
    return 1; // Encerra o programa com erro
}
for (int i = 0; i < tamanho; i++) 
{
    printf("Digite o valor para o indice %d: ", i);
    scanf("%d", &vetor[i]); 
}
for (int i = 0; i < tamanho; i++)
{
    soma = soma + vetor[i];
}
for (int i = 0; i < tamanho; i++)
{
    printf("\nvetor %d = %d", i, vetor[i]);
}
media = soma / tamanho;
printf("\nA media dos valores dos vetores e : %d", media);
return 0;
}
