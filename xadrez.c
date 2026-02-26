#include <stdio.h>

int main() {
    
    // =============================================
    // MOVIMENTO DO CAVALO - "L" (2 baixo, 1 esquerda)
    // =============================================
    
    printf("\n=== Movimento do Cavalo ===\n");
    printf("(2 casas para baixo, 1 casa para esquerda)\n\n");
    
    // Loop externo: 2 movimentos para BAIXO (for)
    // O Cavalo move duas casas na vertical
    for(int i = 0; i < 2; i++) {
        printf("Baixo\n");  // Primeiro movimento: para baixo
    }
    
    // Loop interno: 1 movimento para ESQUERDA (while)
    // Após descer duas casas, move uma para esquerda
    int j = 0;
    while(j < 1) {
        printf("Esquerda\n");  // Movimento final: para esquerda
        j++;
    }
    
    printf("\n=== Cavalo chegou ao destino! ===\n");
    
    return 0;
}