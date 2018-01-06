#include <stdio.h>

int main() {
	int a,b,resultadoS,resultadoR;
	/*Se leen dos numeros por teclado y se guardan dentro
	de las variables a y b*/
	printf("Da el primer numero\n");
	scanf("%d",&a);
	printf("Da el segundo numero\n");
	scanf("%d",&b);
	/*Las variables resultado ahora contendran la suma y la resta de la 
	operacion que se les asigno*/
	resultadoS = a + b;
	resultadoR = a - b;
	printf("La suma de los numeros es: %d\n",resultadoS);
	printf("La resta de los numeros es: %d",resultadoR);	
	
	return 0;
}

