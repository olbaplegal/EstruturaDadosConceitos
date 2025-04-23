#include <stdio.h>

int main()
{
    int i = 0, n = 0;
    printf("\n-=-=-=-=-=|LISTA DE COMPRAS|=-=-=-=-=-");
    printf("\nDigite quantos itens a lista de compras tera (max 100): ");
    scanf("%d", &n);

    if (n > 100 || n <= 0) 
    {
        printf("Quantidade invalida!\n");
        return 1;
    }

    char lista[n][100];

    for (i = 0; i < n; i++) 
    {
        printf("Digite o nome do %do item da lista de compra: ", i + 1);
        scanf("%s", lista[i]);
    }

    printf("\nLista de compras:\n");
    for (i = 0; i < n; i++) 
    {
        printf("Item %d: %s\n", i + 1, lista[i]);
    }

    return 0;
}
/*2) Elabore um programa utilizando os conceitos acima mas solucionando um problema da vida pessoal; O intuito deste software é criar uma lista de compras as quais você vai adicionando os itens que irá comprar, tentei fazer um array de strings mas não consegui então tive que fazer um array bidimensional para poder adicionar as os char por char e no final pegar o todo(como uma string), isso limitou cada item da lista a ter um número maximo de caracteres.(não sei como poderia ter sido feito diferente)*/
