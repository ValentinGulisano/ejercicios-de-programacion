#include <stdio.h>
#include <string.h>

//9) El usuario ingresar� una palabra de hasta 10 letras. Se desea mostrarla en pantalla pero encriptada seg�n el "C�digo C�sar".
//Esto consiste en reemplazar cada letra con la tercera consecutiva en el abecedario. Por ejemplo, "CASA" se convierte en "FDVD".
//Tener en cuenta que las �ltimas letras deben volver al inicio, por ejemplo la Y se convierte B.
int main (){
    char arr[30] = {0};
    printf("Ingrese una palabra de hasta 20 letras en may�sculas: ");
    scanf("%s", arr);
    for (int i = 0; i < strlen(arr); i++){
        arr[i] = (arr[i] + 3);
        if (arr[i] + 3 > 90){
            arr[i] = arr[i] - 26;
        }
    }
    printf("\nPalabra encriptada: %s", arr);
}

