// Exercicios Propostos ARRAY (MATRIZ)
// Objetivo: Escreva um programa que imprima a posi��o do menor n�mero de n n�meros usando matrizes

#include <stdio.h>

int main(){
	int i, n, arr[20], small, pos;
	printf("\n Entre com o numeros de elementos da matriz: ");
	scanf("%d", &n);
	printf("\n Entre com os elementos: \n");
	for(i=0;i<n;i++)	{
		printf("\n arr[%d] = ", i);
		scanf("%d",&arr[i]);	}
		small = arr[0];
		pos =-1;
		for(i=1;i<n;i++)	{
		if(arr[i] < small){
			small = arr[i];
			pos = i;		}
	}
	printf("\n O MENOR elemento: %d", small);
	printf("\n A POSICAO do menor elemento: %d", pos);
	return 0;
}
/*
1) Como o programa faz para descobrir a posi��o do menor n�mero entre "n" n�meros?
2) Explique a linha 14. O que faz o n�mero "0" dentro dos colchetes?
3) Troque o "0" da linha 14 por outro n�mero. Qual o resultado? Por que?
4) Por que "pos" na linha 15 tem que ser igual a "0"? E se for outro n�mero? 
5) Troque o "0" da linha 15 por outro n�mero (1 por exemplo). Qual o resultado? Por que?
6) Explique as linhas 17, 18 e 19.*/

/*
1)O programa decobriu a posição do menor número criando uma varivel "small" que recebeu o valor do primeiro indice da fase de adicionar os outros valores. posteriormente aconteceu uma fase de comparação, se o small fosse menor que que o valor do indice então dava loop senão small recebia o valor.
2)O número 14 indica o número do indice do da matriz
3)O programa buga, pois você indica que o small vai receber o valor do indice que você colocou, se você como colocou que small vai receber o indice 20 mas o usuário só adicionou 10 à matriz então bugara pois o small vai puxar um valor que está fora da estensão da sua matriz(dependendo do número que você botar no lugar do 0 vai dar diferentes resultados)
4)A variavel "pos" na linha 15 não pode ser outro número pois se o primeiro numero digitado pelo usuario for o menor do array, então o laço for nunca será iniciado e o pos nunca recebera outro numero fazendo assim com que a posição apresentada seja a errada
5)Quando trocamos o numero de "pos" para quelquer outro que não seja 0 isso faz com que o programa não nos dê a resposta esperada, pois se o numero digitado pelo usuario for o menor do array, então o laço for nunca será iniciado e o pos nunca recebera outro numero fazendo assim com que a posição apresentada seja a errada
6)As linha 17, 18 e 19 apresentam um if que tem como parametro: se o valor do array atual for menor que "small" o "small" vai receber o valor desse array e a variavel pos vai receber o indice desse array
*/
