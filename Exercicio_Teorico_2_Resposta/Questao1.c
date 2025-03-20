#include <stdio.h>

int main()
{
    int i = 0, n = 0;
    float numero[100];
    float soma = 0, media = 0;
    
    printf("\n-=-=-=-=-=|MERCADINHO DO SEU PAULO|=-=-=-=-=-");
    printf("\nDIGITE O VALOR DOS PRODUTOS PARA OBTER O VALOR TOTAL DA COMPRA!\n");
    printf("Digite a quantidade de produtos (max 100): ");
    scanf("%d", &n);
    
    if (n > 100 || n <= 0) 
    {
        printf("Quantidade invalida!\n");
        return 1;
    }
    
    for (i = 0; i < n; i++) 
    {
        printf("Valor do %do produto: ", i + 1);
        scanf("%f", &numero[i]);
        soma += numero[i];
    }
    
    media = soma / n;
    printf("\nTotal a pagar: R$ %.2f\n", soma);
    printf("Media de preco por produto: R$ %.2f\n", media);
    
    return 0;
}

/*1) Elabore um programa utilizando os conceitos acima mas solucionando um problema empresarial;
este software age como uma registradora de mercadoria, somando o preço dos produtos comprados e a média dos preços, atualmente seu item maximo de produtos é 100 mas pode ser implementado posteriormente*/