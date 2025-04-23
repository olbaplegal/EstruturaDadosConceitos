// Exercicios Propostos ARRAY (MATRIZ)
// Objetivo: Escreva um programa que LEIA e MOSTRE n números usando um ARRAY

#include <stdio.h>

int main()
{
	int i, n, numero[100]; // tam. máx. possivel
	// i = varíavel usada como contador nos LAÇOS ou loop ou ITERAÇÃO
	// n = quantidade e numeros a serem fornecidos (n números)
	// 
	printf("\n Digite o numero de elementos da matriz: ");
	scanf("%d", &n);
	// LER
	for(i=0; i < n; i++)
	{
		printf("\n Digite o %do do elemento: ", i+1);
		scanf("%d",&numero[i]);
	}
	printf("\n Os elementos da matriz sao:  ");
// MOSTRAR
	for(i=0; i < n; i++)
	{
		printf("\n Mostre o %do elemento: %d", i+1, numero[i]);
	}
	return 0;
}

/* 1) Elabore um programa utilizando os conceitos acima mas solucionando um problema empresarial;
2) Elabore um programa utilizando os conceitos acima mas solucionando um problema da vida pessoal;*/
