#include <stdio.h>

#define VENDEDORES 5
#define PRODUTOS 3

int main() {
    float vendas[VENDEDORES][PRODUTOS];
    float totalVendedor[VENDEDORES] = {0};
    float totalProduto[PRODUTOS] = {0};
    
    // Entrada de dados - vendas de cada vendedor
    printf("Digite as vendas dos %d vendedores (%d produtos cada):\n", VENDEDORES, PRODUTOS);
    for (int i = 0; i < VENDEDORES; i++) {
        printf("\nVendedor %d:\n", i + 1);
        for (int j = 0; j < PRODUTOS; j++) {
            printf("Produto %d: R$ ", j + 1);
            scanf("%f", &vendas[i][j]);
            
            // Acumula totais
            totalVendedor[i] += vendas[i][j];
            totalProduto[j] += vendas[i][j];
        }
    }
    
    // Relatório de vendas por vendedor
    printf("\n=== TOTAL POR VENDEDOR ===\n");
    for (int i = 0; i < VENDEDORES; i++) {
        printf("Vendedor %d: R$ %.2f\n", i + 1, totalVendedor[i]);
    }
    
    // Relatório de vendas por produto
    printf("\n=== TOTAL POR PRODUTO ===\n");
    for (int j = 0; j < PRODUTOS; j++) {
        printf("Produto %d: R$ %.2f\n", j + 1, totalProduto[j]);
    }
    
    return 0;
}
/*
Em uma pequena empresa, há cinco vendedores. Cada vendedor deve vender três produtos.
Escreva um programa usando um array 2D para imprimir (i) as vendas totais de cada
vendedor e (ii) as vendas totais de cada item.
*/
