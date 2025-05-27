#include <stdio.h>

// Valores das peças
#define MOVIMENTO_BISPO 5
#define MOVIMENTO_TORRE 5
#define MOVIMENTO_RAINHA 8
#define MOVIMENTO_CAVALO_L 1

// Funções que vão ser usadas depois
void mover_bispo_recursivo(int casas);
void mover_torre_recursivo(int casas);
void mover_rainha_recursivo(int casas);

int main() {
    printf("=== XADREZ MATECHECK ===\n\n");
    
    // NÍVEL 1 - Loops básicos
    printf("🏅 NÍVEL NOVATO\n");
    printf("Peças se mexendo:\n\n");
    
    // Bispo - 5 casas diagonal (usando for)
    printf("Bispo indo na diagonal:\n");
    for(int i = 0; i < MOVIMENTO_BISPO; i++) {
        printf("Cima\n");
        printf("Direita\n");
    }
    printf("\n");
    
    // Torre - 5 casas direita (usando while)
    printf("Torre indo pra direita:\n");
    int torre_casas = 0;
    while(torre_casas < MOVIMENTO_TORRE) {
        printf("Direita\n");
        torre_casas++;
    }
    printf("\n");
    
    // Rainha - 8 casas esquerda (usando do-while)
    printf("Rainha indo pra esquerda:\n");
    int rainha_casas = 0;
    do {
        printf("Esquerda\n");
        rainha_casas++;
    } while(rainha_casas < MOVIMENTO_RAINHA);
    printf("\n");
    
    // NÍVEL 2 - Loops dentro de loops pro cavalo
    printf("🏅 NÍVEL AVENTUREIRO\n");
    printf("Cavalo fazendo L:\n\n");
    
    // Cavalo em L (2 baixo, 1 esquerda)
    for(int movimento = 0; movimento < MOVIMENTO_CAVALO_L; movimento++) {
        // Vai 2 pra baixo
        for(int baixo = 0; baixo < 2; baixo++) {
            printf("Baixo\n");
        }
        
        // Vai 1 pra esquerda
        int esquerda = 0;
        while(esquerda < 1) {
            printf("Esquerda\n");
            esquerda++;
        }
    }
    printf("\n");
    
    // NÍVEL 3 - Funções que se chamam sozinhas
    printf("🥇 NÍVEL MESTRE\n");
    printf("Peças usando funções especiais:\n\n");
    
    // Bispo com função especial
    printf("Bispo na diagonal (função especial):\n");
    mover_bispo_recursivo(MOVIMENTO_BISPO);
    printf("\n");
    
    // Torre com função especial
    printf("Torre pra direita (função especial):\n");
    mover_torre_recursivo(MOVIMENTO_TORRE);
    printf("\n");
    
    // Rainha com função especial
    printf("Rainha pra esquerda (função especial):\n");
    mover_rainha_recursivo(MOVIMENTO_RAINHA);
    printf("\n");
    
    // Cavalo em L pra cima e direita
    printf("Cavalo fazendo L pra cima:\n");
    for(int movimento = 0, total = 0; movimento < MOVIMENTO_CAVALO_L && total < 3; movimento++) {
        for(int passo = 0; passo < 3; passo++, total++) {
            if(passo < 2) {
                printf("Cima\n");
                if(total >= 1) continue;
            } else {
                printf("Direita\n");
                break;
            }
        }
    }
    printf("\n");
    
    printf("=== ACABOU! ===\n");
    
    return 0;
}

// Função que chama ela mesma pro bispo
void mover_bispo_recursivo(int casas) {
    // Para quando não tem mais casas
    if(casas <= 0) {
        return;
    }
    
    // Vai diagonal: direita + cima
    printf("Direita\n");
    printf("Cima\n");
    
    // Chama ela mesma com uma casa a menos
    mover_bispo_recursivo(casas - 1);
}

// Função que chama ela mesma pra torre
void mover_torre_recursivo(int casas) {
    // Para quando não tem mais casas
    if(casas <= 0) {
        return;
    }
    
    // Vai pra direita
    printf("Direita\n");
    
    // Chama ela mesma com uma casa a menos
    mover_torre_recursivo(casas - 1);
}

// Função que chama ela mesma pra rainha
void mover_rainha_recursivo(int casas) {
    // Para quando não tem mais casas
    if(casas <= 0) {
        return;
    }
    
    // Vai pra esquerda
    printf("Esquerda\n");
    
    // Chama ela mesma com uma casa a menos
    mover_rainha_recursivo(casas - 1);
}
