#include <stdio.h>

int main() {

    const int MOV_BISPO = 5;
    const int MOV_TORRE = 5;
    const int MOV_RAINHA = 8;
    const int MOV_CAVALO = 2;

    printf("Movendo o Bispo:\n");
    for (int i = 1; i <= MOV_BISPO; i++) {
        printf("Cima e Direita - Passo %d\n", i);
    }
    
    printf("\nMovendo a Torre:\n");
    for (int i = 1; i <= MOV_TORRE; i++) {
        printf("Direita - Passo %d\n", i);
    }

    printf("\nMovendo a Rainha:\n");
    for (int i = 1; i <= MOV_RAINHA; i++) {
        printf("Esquerda - Passo %d\n", i);
    }

    printf("\nMovendo o Cavalo em L:\n");
    for (int i = 1; i <= MOV_CAVALO; i++) {
        printf("Baixo - Passo %d\n", i);
        
        int j = 1;
        while (j <= MOV_CAVALO) {
            printf("Esquerda - Passo %d\n", j);
            j++;
        }

        printf("Fim do movimento em L\n");
    }

    return 0;
}
