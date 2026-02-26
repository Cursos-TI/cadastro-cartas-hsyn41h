#include <stdio.h>

// =============================================
// RECURSIVIDADE - Torre, Bispo e Rainha
// =============================================

// Torre - Move para DIREITA (recursivo)
void moverTorre(int casas) {
    if(casas == 0) return;  // Caso base: parar quando casas = 0
    printf("Direita\n");     // Move uma casa para direita
    moverTorre(casas - 1);   // Chama a si mesma com uma casa a menos
}

// Bispo - Move na diagonal (CIMA + DIREITA) - recursivo
void moverBispoRecursivo(int casas) {
    if(casas == 0) return;
    printf("Cima\n");
    printf("Direita\n");
    moverBispoRecursivo(casas - 1);
}

// Rainha - Move para ESQUERDA (recursivo)
void moverRainha(int casas) {
    if(casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// =============================================
// BISPO COM LOOPS ANINHADOS
// =============================================
void moverBispoLoops(int vertical, int horizontal) {
    for(int i = 0; i < vertical; i++) {        // Loop externo: movimento vertical
        for(int j = 0; j < horizontal; j++) {  // Loop interno: movimento horizontal
            printf("Cima\n");    // Direção vertical
            printf("Direita\n"); // Direção horizontal
        }
    }
}

// =============================================
// CAVALO COM LOOPS COMPLEXOS
// =============================================
void moverCavalo() {
    printf("Movimento do Cavalo (2 Cima + 1 Direita):\n");
    
    // Loop para movimento vertical (2 vezes)
    for(int i = 0; i < 2; i++) {
        printf("Cima\n");
        
        // Loop para movimento horizontal (1 vez)
        for(int j = 0; j < 1; j++) {
            // Só executa na última iteração do loop vertical
            if(i == 1) {
                printf("Direita\n");
                break;  // Sai do loop horizontal após executar
            }
        }
    }
}

// =============================================
// FUNÇÃO PRINCIPAL
// =============================================
int main() {
    
    printf("========================================\n");
    printf("=== MOVIMENTO DA TORRE (Recursivo) ===\n");
    printf("========================================\n");
    moverTorre(5);  // Torre move 5 casas para direita
    
    printf("\n========================================\n");
    printf("=== MOVIMENTO DO BISPO (Recursivo) ===\n");
    printf("========================================\n");
    moverBispoRecursivo(5);  // Bispo move 5 casas na diagonal
    
    printf("\n========================================\n");
    printf("=== MOVIMENTO DO BISPO (Loops Aninhados) ===\n");
    printf("========================================\n");
    moverBispoLoops(5, 1);  // 5 vertical, 1 horizontal
    
    printf("\n========================================\n");
    printf("=== MOVIMENTO DA RAINHA (Recursivo) ===\n");
    printf("========================================\n");
    moverRainha(8);  // Rainha move 8 casas para esquerda
    
    printf("\n========================================\n");
    printf("=== MOVIMENTO DO CAVALO (Loops Complexos) ===\n");
    printf("========================================\n");
    moverCavalo();  // Cavalo: 2 cima + 1 direita
    
    printf("\n========================================\n");
    printf("=== TODOS OS MOVIMENTOS CONCLUÍDOS ===\n");
    printf("========================================\n");
    
    return 0;
}