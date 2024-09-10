#include <stdio.h>

void mover_bispo(int passo, const int max_passos) {
    if (passo > max_passos) return;
    printf("Cima e Direita - Passo %d\n", passo);
    mover_bispo(passo + 1, max_passos);
}

void mover_torre(int passo, const int max_passos) {
    if (passo > max_passos) return;
    printf("Direita - Passo %d\n", passo);
    mover_torre(passo + 1, max_passos);
}

void mover_rainha(int passo, const int max_passos) {
    if (passo > max_passos) return;
    printf("Esquerda - Passo %d\n", passo);
    mover_rainha(passo + 1, max_passos);
}

int main() {

    const int MOV_BISPO = 5;
    const int MOV_TORRE = 5;
    const int MOV_RAINHA = 8;
    
    printf("Movendo o Bispo:\n");
    mover_bispo(1, MOV_BISPO);
    
    printf("\nMovendo a Torre:\n");
    mover_torre(1, MOV_TORRE);

    printf("\nMovendo a Rainha:\n");
    mover_rainha(1, MOV_RAINHA);

    printf("\nMovendo o Cavalo em L:\n");
    
    int mov_vertical = 2;
    int mov_horizontal = 1;

    for (int i = 1; i <= mov_vertical; i++) {
        printf("Cima - Passo %d\n", i);
        
        for (int j = 1; j <= mov_horizontal; j++) {
            if (j == 1) {
                printf("Direita - Passo %d\n", j);
            } else {
                continue;
            }
        }

        if (i == 1) {
            break;
        }
    }

    printf("Fim do movimento em L do Cavalo\n");

    return 0;
}
