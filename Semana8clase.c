#include <stdio.h>

#define F 2
#define C 2

// En esta linea de codigo sumamos las 2 matrices
void sumarMatrices(int matriz1[][C], int matriz2[][C], int resultado[][C]) {
    // Esta linea de codigo pasa/recorre por cada fila en la iteración.
    for (int i = 0; i < F; i++) {
        // Esta linea de codigo pasa/recorre por cada columna en la iteración.
        for (int j = 0; j < C; j++) {
            /* Aqui realizamos la suma de los elementos que ocupan la misma 
            posición en ambas matrices y almacena el resultado de cada suma en la matriz resultado.*/
            resultado[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }
}

// Esta función imprime una matriz en la pantalla.
void imprimirMatriz(int matriz[][C]) {
    // Aqui recorrimos cada fila
    for (int i = 0; i < F; i++) {
        // Aqui recorrimos cada columna
        for (int j = 0; j < C; j++) {
            // En esta parte del código, mostramos el valor que se encuentra en la posición (i, j) de la matriz.
            printf("%d ", matriz[i][j]);
        }
        /* En esta línea de código, añadimos un carácter de salto de línea al final 
        de cada fila cuando imprimimos la matriz*/
        printf("\n");
    }
}

int main() {
    int matriz1[F][C];
    int matriz2[F][C];
    int resultado[F][C];

    // Estoy recopilando los valores de la matriz 1
    printf("Ingrese los numeros de la matriz 1:\n");
    for (int i = 0; i < F; i++) {
        for (int j = 0; j < C; j++) {
            /* se obtiene el valor del elemento ubicado en la posición (i, j)
             de la matriz y se guarda en la variable 'matriz1'*/
            scanf("%d", &matriz1[i][j]);
        }
    }

    // Estoy recopilando los valores de la matriz 2
    printf("Ingrese los numeros de la matriz 2:\n");
    for (int i = 0; i < F; i++) {
        for (int j = 0; j < C; j++) {
            /* se obtiene el valor del elemento ubicado en la posición (i, j)
             de la matriz y se guarda en la variable 'matriz2'*/
            scanf("%d", &matriz2[i][j]);
        }
    }

    // Sumamos las matrices
    sumarMatrices(matriz1, matriz2, resultado);

    // En esta línea de código, se muestra en la salida las matrices resultantes
    printf("El resultado es:\n");
    imprimirMatriz(resultado);

    return 0;
}
