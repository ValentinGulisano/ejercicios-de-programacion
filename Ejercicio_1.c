#include <stdio.h>



main (){
	int i = 0; //Declaramos variables que utilizaremos.
	char Palabra[20];
	
	printf("Ingrese una palabra (Maximo 20 caracteres): ");
	gets(Palabra);

	while (Palabra[i] != 0){//Utilizamos el While como una especie de for para que, la variable "i" Sea el contador de las letras ya que, al llegar a la posicion 5 del vector no habr� ningun car�cter por ende, habr� un valor NULL o 0 y nos sacar� del while.
		i++;
	}
	
	printf("La palabra tiene %d Letras", i);
	
	
	getchar();
	return 0;
}
