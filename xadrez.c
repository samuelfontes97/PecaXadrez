#include <stdio.h>


void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}


void moverBispoRecursivo(int casas) {
    if (casas == 0) return;

    for (int i = 0; i < 1; i++) {
        
        for (int j = 0; j < 1; j++) {
            printf("Cima Direita\n");
        }
    }
    moverBispoRecursivo(casas - 1);
}



int main() {
   
    printf("Movimento da Torre (5 casas para a direita):\n");
    moverTorre(5);
    printf("\n");

    
    printf("Movimento do Bispo (5 casas na diagonal para cima e direita):\n");
    moverBispoRecursivo(5);
    printf("\n");

    
    printf("Movimento da Rainha (8 casas para a esquerda):\n");
    moverRainha(8);
    printf("\n");

    
    printf("Movimento do Cavalo (2 casas para cima e 1 para a direita):\n");
    int direcaoVertical = 0;
    int direcaoHorizontal = 0;

    for (int i = 0; i < 3; i++) { 
        for (int j = 0; j < 2; j++) {
            if (direcaoVertical < 2) {
                printf("Cima\n");
                direcaoVertical++;
                continue; 
            }
            if (direcaoVertical == 2 && direcaoHorizontal < 1) {
                printf("Direita\n");
                direcaoHorizontal++;
                break; 
            }
        }
        if (direcaoVertical == 2 && direcaoHorizontal == 1) {
            break; 
        }
    }

    return 0;
}
