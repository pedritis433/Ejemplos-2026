#include <stdio.h>

int vector[5],x,j;

int main()
{
    for(x=0;x<5;x++){
        printf("Indique un numero: ");
        scanf("%d",&vector[x]);
}
    for(j=0;j<5;j++){
        printf("\nSe ingresó el numero: %d",vector[j]);
    }
    return 0;
}
