#include <stdio.h>
/*
@autor:
 * Cesar villalobos
 * Estudiante: Ing.Sistemas UDI
*/

int main(){
	int a,c,d=0;
	printf("Ingrese el numero");
	scanf("%i",&a); //Se pide el numero a analizar
	while (a>0){
		a=a/10; //Se quita un digito del numero
		d++; // Se cuenta
	} // Se crea la estructura de control
	printf("%i\n",d); //Se termina por imprimir el contador
	system("pause");
	return 0;
	
}
