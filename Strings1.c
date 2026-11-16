#include <stdio.h>
#include <stdlib.h> //librerias para strings
#include <string.h>

int main()
{
    char palabra[5];
    printf("\nIngrese el código: ");
    scanf("%s",palabra);
    if(strcmp(palabra, "hola") != 0){ //el if compara el string a la cadena "hola", si no devuelve nada significa que los strings son iguales
        printf("\nIncorrecto, no vuelva por acá");
    }else{
        printf("\nUsted escribió: %s", palabra);
    }
    return 0;
}
