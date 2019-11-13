#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char *argu[])
{
	//se declaran variables
	int num1, a, resultado;
	//de char a int 
	num1=atoi(argu[1]);
	//Se guarda el valor para usarla en while
	a=num1;
	resultado=0;
	//funcion
	while(a>0){
		resultado = resultado + a%10;
		a = a/10;
	} 
	//resultado
	printf("%i\n", resultado);
	return 0;
}