#include <stdio.h>
typedef struct niño{
    int edad;
    char curso;
    float nota;
}alumno;

int main()
{
    alumno estudiante1;
    //así es para definir ya el valor de la edad en la variable de tipo alumno que creamos:
    //estudiante1.edad = 15;
    //eso que hacemos de utilizar un punto para modificar el dato en la estructura se llama "apuntar"
    //si queremos que el usuario modifique por su cuenta ese dato usamos un scanf
    scanf("%c",&estudiante1.curso);
    scanf("%d",&estudiante1.edad);
    printf("%d",estudiante1.edad);
    printf("%c",estudiante1.curso);

    return 0;
}
