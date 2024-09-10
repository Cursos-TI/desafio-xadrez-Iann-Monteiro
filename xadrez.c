#include <stdio.h>

int main() {

    const int MOV_BISPO = 5;
    const int MOV_TORRE = 5;
    const int MOV_RAINHA = 8;

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

    return 0;
}
