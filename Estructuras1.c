#include <stdio.h>

int main()
{
struct Persona {
    char sangre;
    int edad;
    float altura;
};
//Si queremos definir todo de una podemos anotarlo como está escrito aquí:
//struct Persona p1 = {"B", 25, 1.75};
//Sinó usamos los punteros:
struct Persona p1;
p1.edad = 25;
p1.sangre = 'B';
p1.altura = 1.75;
    printf("%d\n",p1.edad);
    printf("%c\n",p1.sangre);
    printf("%f",p1.altura);
    return 0;
}
