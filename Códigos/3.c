#include <stdio.h>
#include <string.h>

//Funcao para realizar a soma das matrizes
 soma(int matrizA[4][4], int matrizB[4][4], int resultado[4][4]) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            resultado[i][j] = matrizA[i][j] + matrizB[i][j];
        }
    }
}

//Funcao para realizar a subtracao das matri3es
 subtracao(int matrizA[4][4], int matrizB[4][4], int resultado[4][4]) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            resultado[i][j] = matrizA[i][j] - matrizB[i][j];
        }
    }
}

 //Funcao para realizar a multiplicacao das matrizes
 multiplicacao(int matrizA[4][4], int matrizB[4][4], int resultado[4][4]) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            resultado[i][j] = 0;
            for (int k = 0; k < 4; k++) {
                resultado[i][j] += matrizA[i][k] * matrizB[k][j];
            }
        }
    }
}

int main() {
    int matrizA[4][4];
    int matrizB[4][4];
    int resultado[4][4];
    char operacao[5];

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d", &matrizA[i][j]);
        }
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d", &matrizB[i][j]);
        }
    }

    scanf("%s", operacao);

    if (strcmp(operacao, "soma") == 0) {
        soma(matrizA, matrizB, resultado);
    } else if (strcmp(operacao, "sub") == 0) {
        subtracao(matrizA, matrizB, resultado);
    } else if (strcmp(operacao, "mult") == 0) {
        multiplicacao(matrizA, matrizB, resultado);
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%*d", +4, resultado[i][j]);
        }
        printf("\n");
    }

    return 0;
}
