#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main()
{
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1

    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0
#define TAMANHO_TABULEIRO 10

    int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO] = {0}; // Inicializa o tabuleiro com 0

    // Posiciona dois navios na diagonal
    int linha_diagonal1 = 1, coluna_diagonal1 = 1;
    int linha_diagonal2 = 6, coluna_diagonal2 = 8;

    for (int i = 0; i < 3; i++)
    {
        tabuleiro[linha_diagonal1 + i][coluna_diagonal1 + i] = 3;
        tabuleiro[linha_diagonal2 + i][coluna_diagonal2 - i] = 3;
    }

    // Posiciona dois navios horizontalmente ou verticalmente
    int linha_horizontal = 4, coluna_horizontal = 0;
    int linha_vertical = 8, coluna_vertical = 6;

    for (int i = 0; i < 3; i++)
    {
        tabuleiro[linha_horizontal][coluna_horizontal + i] = 3;
        tabuleiro[linha_vertical + i][coluna_vertical] = 3;
    }
    // Exibe o tabuleiro com os navios posicionados
    printf("TABULEIRO BATALHA NAVAL\n");
    printf("   "); // Espaço inicial para alinhar os identificadores das colunas
    for (char col = 'A'; col < 'A' + TAMANHO_TABULEIRO; col++)
    {
        printf("%c ", col); // Imprime os identificadores das colunas
    }
    printf("\n");

    for (int i = 0; i < TAMANHO_TABULEIRO; i++)
    {
        if (i + 1 <= 9)
        {
            printf(" %d ", i + 1);
        } // Imprime o identificador da linha
        else
        {
            printf("%d ", i + 1);
        }
        for (int j = 0; j < TAMANHO_TABULEIRO; j++)
        {
            printf("%d ", tabuleiro[i][j]); // Exibe o elemento do tabuleiro
        }
        printf("\n");
    }

    return 0;
}