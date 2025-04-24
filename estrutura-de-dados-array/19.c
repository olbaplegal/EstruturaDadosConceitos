#include <stdio.h>

#define ALUNOS 5
#define DISCIPLINAS 3

int main() {
    float notas[ALUNOS][DISCIPLINAS];
    float maiorNota[DISCIPLINAS];
    
    // Leitura das notas
    printf("Digite as notas dos %d alunos em %d disciplinas:\n", ALUNOS, DISCIPLINAS);
    for (int i = 0; i < ALUNOS; i++) {
        printf("\nAluno %d:\n", i + 1);
        for (int j = 0; j < DISCIPLINAS; j++) {
            printf("Disciplina %d: ", j + 1);
            scanf("%f", &notas[i][j]);
            
            // Inicializa a maior nota na primeira leitura
            if (i == 0) {
                maiorNota[j] = notas[i][j];
            }
            // Atualiza a maior nota se necessário
            else if (notas[i][j] > maiorNota[j]) {
                maiorNota[j] = notas[i][j];
            }
        }
    }
    
    // Exibição das maiores notas por disciplina
    printf("\nMaiores notas em cada disciplina:\n");
    for (int j = 0; j < DISCIPLINAS; j++) {
        printf("Disciplina %d: %.2f\n", j + 1, maiorNota[j]);
    }
    
    return 0;
}
/*
Escreva um programa para ler as marcas de uma matriz 2D que armazene as marcas de
cinco alunos em três disciplinas. Escreva um programa para exibir as notas mais altas em
cada assunto.
*/
