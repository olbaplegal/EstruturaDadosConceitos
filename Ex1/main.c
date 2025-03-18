#include <stdio.h>
int main() {
int vetor[20]; int tamanho;
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
printf("Vetor preenchido:\n");
for (int i = 0; i < tamanho; i++) 
{
    printf("%d ", vetor[i]); 
}
printf("\n");
system("pause");
return 0;
}