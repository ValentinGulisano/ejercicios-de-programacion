#include <stdio.h>


int Compara (char s1[100], char s2[100]){
    int i;
    for(i=0;(s1 [i]==s2[i]) &&(s1 [i] != '\0') && (s2[i] != '\0') ; i++); 
    return (s1[i]-s2[i]);
}
 
int main(){
	int Resultado;
    char a[100];
    char b[100];
    
         printf("Ingrese el primer valor: ");
         scanf("%s", &a);
         printf("Ingrese el segundo valor:");
         scanf("%s", &b);
         
    Resultado = Compara(a,b);
    
    if (Resultado == 0){ 
    	printf("valores iguales");
	}else{
		printf("valores distintos");
	}
	
}
