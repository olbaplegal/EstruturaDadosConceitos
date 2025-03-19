#include<stdio.h>
//#include<conio.h>
int main()
{
	int i=0, n, arr[20];
	printf("\n Entre com o numero de elementos : ");
	scanf("%d", &n);
	printf("\n Entre com os elementos : ");
	for(i=0; i < n; i++)
	{
		printf("\n arr[%d] = ", i);
		scanf("%d", &arr[i]);
	}
	printf("\n Elementos da matriz: ");
	for(i=0;i<n;i++)	
		printf("arr[%d] = %d\t ", i, arr[i]);
	return 0;
}
/*1) O que acontece se o usu�rio Entrar com um n�mero MAIOR do que
20 elementos;
2) O que faz a linha 11;
3) O que faz a linha 12;
4) Quantas vezes o la�o FOR da linha 15 ser� executado? Como isso acontece?
5) Qual a fun��o dos dois %d na linha 16? */

/*Respostas >>
1) Se o úsuario entrar com o número maior do que os 20 elementos ele vai conseguir adicioanr os valores á lias ao vetor mas não consiguirá realizar nenhuma ação com os indices que estrapolaram o vetor, a quantidade de indices a mais que você conseguirá adicionar dependerá da sua maquina, consegui estrapolar o número até 21 indices e em outros até 23 indices.
2) A linha 11 imprimi na tela o array "arr" e seu indice.
3) O scanf mostrará um input ao qual o valor será adicionado ao indice do array mostrado anteriormente
4) O laço for será executado o número de vezes que o usuário escolher, o usuário determinará o números de execuções na linha 7, o valor será guardado na variavel n que posteriormente será ultilizado no for da linha 15. Se a variavel i(que inicia com 0) que é almenta +1 a cada loop for menor que n(valor que o usuário botou) o laço for vai executar.
5) Na linha 16 o primeiro %d refere-se a variavel i criada no laço for, ultilizado para representar o valor do indice do array e o segundo %d referece ao array na posição i ou seja um vai mostrar a posição do array e o outro vai mostrar o valor contido naquele indice.*/

