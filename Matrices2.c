#include <stdio.h>
int matriz[2][3] = {
    {1, 2, 3},
    {4, 5, 6}
};

int main()
{
    int filas = 2;
    int columnas = 3;

    // Imprimir la matriz en formato de tabla
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf("%d \t", matriz[i][j]); // Imprime el elemento y una tabulación
        }
        printf("\n"); // Salto de línea al terminar cada fila
    }

    return 0;
}
