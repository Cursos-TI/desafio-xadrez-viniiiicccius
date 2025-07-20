#include <stdio.h>
#include <stdbool.h>
//ae
// Função recursiva do Bispo (simples)
void movimentosBispo(int x, int y, int passoX, int passoY) {
    int novoX = x + passoX;
    int novoY = y + passoY;

    if (novoX < 0 || novoX > 7 || novoY < 0 || novoY > 7) {
        return; // Saiu do tabuleiro
    }

    printf("Bispo pode ir para (%d, %d)\n", novoX, novoY);
    movimentosBispo(novoX, novoY, passoX, passoY); // Chama de novo
}

// Movimentos do Cavalo (sem recursão, só loops)
void movimentosCavalo(int x, int y) {
    int movimentos[8][2] = {
        {2, 1}, {2, -1}, {-2, 1}, {-2, -1},
        {1, 2}, {1, -2}, {-1, 2}, {-1, -2}
    };

    printf("\nMovimentos do Cavalo a partir de (%d, %d):\n", x, y);
    for (int i = 0; i < 8; i++) {
        int novoX = x + movimentos[i][0];
        int novoY = y + movimentos[i][1];

        if (novoX >= 0 && novoX <= 7 && novoY >= 0 && novoY <= 7) {
            printf("Cavalo pode pular para (%d, %d)\n", novoX, novoY);
        }
    }
}

int main() {
    printf("=== Movimentos do Bispo ===\n");
    movimentosBispo(3, 3, 1, 1); // Diagonal pra baixo-direita

    movimentosCavalo(4, 4); // Posição central

    return 0;
}
~   
