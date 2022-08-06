#include <stdio.h>
//7) El usuario ingresará 5 nombres de personas y sus edades (número entero). 
//Luego de finalizar el ingreso, muestre en pantalla el nombre de la persona más joven.
//El ingreso se realiza de este modo: nombre y edad de la primera persona, luego nombre y edad de la segunda, etc...
//Nota: no hay que almacenar todos los nombres y todas las notas.
typedef struct persona{
    int edad;
    char nombre[30];
} persona;
int main (){
    
    persona personas[6];
    int col = 0;
    int col2 = 0;
    for (int i = 1; i < 6; i++){
        printf("\nIngrese el nombre de la persona %d: ", i);
        scanf("%s", personas[i].nombre);
        printf("Ingrese la edad de la persona %d: ", i);
        scanf("%d", &personas[i].edad);
    }
    col = personas[1].edad;
    col2 = 1;
    for (int i = 1; i < 6; i++){
        if (personas[i].edad < col){
            col = personas[i].edad;
            col2 = i;
        }
    }
    printf("Persona mas joven: %s", personas[(col2)].nombre);
}
