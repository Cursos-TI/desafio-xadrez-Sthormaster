#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    int bispo = 0, torre = 0, rainha = 0, cavalo = 1;
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    //mover o bispo 5 casas para cima à direita
        printf("Bispo move-se para\n");
        while (bispo < 5){
            printf("Acima e a direita!\n");//Imprime o movimento do Bispo
            bispo++;
        }
        printf("\n");

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    //mover a torre 5 casas para a direita
        printf("Torre move-se para\n");
        do {
            printf("Direita!\n");//Imprime o movimento da Torre
            torre++;
        } while (torre < 5);
        printf("\n");

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    //mover a rainha 7 casas para a esquerda (Movimentei a rainha apenas 7x pois 8x ela sairia do tabuleiro)
        printf("Rainha move-se para\n");
        for (rainha; rainha < 7; rainha++) {
            printf("Esquerda!\n"); //Imprime o movimento da rainha 
        }
        printf("\n");

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    //mover o cavalo 2 casas para baixo e 1 para a esquerda
        printf("Cavalo move-se para\n");
        while (cavalo--){
            for (int i = 0; i < 2; i++){
                printf("Baixo!\n");
            }
            printf("Esquerda!\n");
        }
        printf("\n");

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
