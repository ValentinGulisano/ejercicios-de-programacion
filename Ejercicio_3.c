#include <stdio.h>

int Comparar (char s1[100], char s2[100]){
    int i;
    for(i=0;(s1 [i]==s2[i]) &&(s1 [i] != '\0') && (s2[i] != '\0') ; i++); 
    return (s1[i]-s2[i]);
}
 
int main(){
	int Resultado;
    char a[100],b[100];
         puts("Ingrese el primer valor:");	
         gets(a);
         puts("Ingrese el segundo valor:");
         gets(b);
         
    Resultado = Comparar(a,b); 
    
    if (Resultado == 0){ 
    	puts("Los valores son iguales");
	}else{
		puts("Los valores son distintos");
	}
	
	getchar();
	return 0;
	
}
