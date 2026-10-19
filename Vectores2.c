#include <stdio.h>
int main(void)
{
 int vector[5], num, i, j;
 /*Se solicita el valor que toman las componentes del
 vector y se almacenan a partir de la última posición (5-1)*/
 i=0;
 do
 {
 printf ("\nDeme un numero entero\n");
 scanf ("%d",&num);
 //Si el núm. leido no es cero se introduce en el vector
 if (num!=0){
 i++;
 vector[5-i]=num;
 }
 }while (( num!=0)&&(i<5));
 //Se Muestran los elmentos del vector.
 if (i>0){
 printf("Los valores introducidos, mostrados en orden inverso, son:\n");
 for (j=5-i; j<5; j++)
 printf("%d\n", vector[j]);
 }
 else
 printf("No ha introducido ningún valor");
 printf("\n");
 return 0;
}
