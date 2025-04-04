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

    int tabuleiro[9][9] = {0}; // Inicializa o tabuleiro com 0

    // Definição dos navios
    int navioHorizontal[3] = {0, 1, 2}; // Navio horizontal ocupa 3 posições
    int navioVertical[3] = {0, 1, 2};   // Navio vertical ocupa 3 posições

    // Coordenadas iniciais dos navios
    int linhaHorizontal = 2;
    int colunaHorizontal = 3;

    int linhaVertical = 5;
    int colunaVertical = 7;

    // Posiciona o navio horizontal no tabuleiro
    for (int i = 0; i < 3; i++)
    {
        tabuleiro[linhaHorizontal][colunaHorizontal + i] = 3;
    }

    // Posiciona o navio vertical no tabuleiro
    for (int i = 0; i < 3; i++)
    {
        tabuleiro[linhaVertical + i][colunaVertical] = 3;
    }

    // Exibe o tabuleiro com os navios posicionados
    printf("TABULEIRO BATALHA NAVAL\n");
    printf("  "); // Espaço inicial para alinhar os identificadores das colunas
    for (char col = 'A'; col < 'A' + 9; col++)
    {
        printf("%c ", col); // Imprime os identificadores das colunas
    }
    printf("\n");

    for (int i = 0; i < 9; i++)
    {
        printf("%d ", i + 1); // Imprime o identificador da linha
        for (int j = 0; j < 9; j++)
        {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
