#include <stdio.h>

// Constantes para facilitar a manutenção do código
#define MOVIMENTOS_TORRE 5
#define MOVIMENTOS_BISPO 5
#define MOVIMENTOS_RAINHA 8
#define MOVIMENTOS_CAVALO_L 1

/**
 * Função recursiva para movimentar a Torre
 * Movimenta 5 casas para a direita
 * @param n: contador de movimentos realizados
 */
void movimentotorre(int n) {
    if (n < MOVIMENTOS_TORRE) {
        printf("Direita\n");
        movimentotorre(n + 1);
    }
}

/**
 * Função recursiva para movimentar o Bispo
 * Movimenta 5 casas na diagonal superior direita usando loops aninhados
 * @param n: contador de movimentos realizados
 */
void movimentobispo(int n) {
    int movB;
    if (n < MOVIMENTOS_BISPO) {
        // Loop aninhado obrigatório para diagonal
        for (movB = 0; movB < 1; movB++) {
            printf("Cima\n");
            printf("Direita\n");
        }
        movimentobispo(n + 1);
    }
}

/**
 * Função recursiva para movimentar a Rainha
 * Movimenta 8 casas para a esquerda
 * @param n: contador de movimentos realizados
 */
void movimentorainha(int n) {
    if (n < MOVIMENTOS_RAINHA) {
        printf("Esquerda\n");
        movimentorainha(n + 1);
    }
}

/**
 * Função para movimentar o Cavalo em formato L
 * Movimenta 1 vez em L para cima à direita usando loops aninhados
 * @param n: contador de movimentos em L realizados
 */
void movimentocavalo(int n) {
    int movC;
    if (n < MOVIMENTOS_CAVALO_L) {
        // Loop aninhado obrigatório para movimento em L
        for (movC = 0; movC < 2; movC++) {
            printf("Cima\n");
        }
        printf("Direita\n");
        movimentocavalo(n + 1);
    }
}

/**
 * Função principal do programa
 * Executa a movimentação de todas as peças conforme especificado
 */
int main() {
    // Declaração de variáveis para controle inicial dos movimentos
    int torre = 0, bispo = 0, rainha = 0, cavalo = 0;
    
    // Exibição clara e organizada dos movimentos de cada peça
    printf("Movimento da Torre:\n");
    movimentotorre(torre);
    
    printf("\nMovimento do Bispo:\n");
    movimentobispo(bispo);
    
    printf("\nMovimento da Rainha:\n");
    movimentorainha(rainha);
    
    printf("\nMovimento do Cavalo:\n");
    movimentocavalo(cavalo);
    
    return 0;
}
