#include<stdio.h>
#include<conio.h>
int main()
{
   int i = 0, n, arr[20];
   printf("\n Entre com o numero de elementos: ");
   scanf("%d", &n);
   printf("\n Entre com os elementos: ");

   for ( i = 0; i < n; i++)
   {
        printf("\n arr[%d] = ", i);
        scanf("%d", &arr[i]);
   }
   printf("\n Elementos da matriz: ");
   for ( i = 0; i < n; i++)
   {
        printf("arr[%d] = %d\t", i, arr[i]);
    }
    return 0;
}