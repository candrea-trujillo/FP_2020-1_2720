#include <stdio.h>
#include <stdlib.h>
//funcion
int saludos(int personas){
	//saludos indica los que de una persona
	//total indica sumatoria de saludos
	int total, saludo;
	//saludos que de a otra persona 
	//a excepcion de el 
	saludo= personas - 1;
	//unica persona, no hay saludos
	if (saludo==0)
	{
		return saludo;
	}
	//sumatoria de los saludos  en total
	total=saludo + saludos(personas - 1);
	return total;
}
int main(int argc, char *argu[])
{
	int resultado, personas;
	//primer argumento
	personas=atoi(argu[1]);
	//se indica la funcion
	resultado=saludos(personas);
	//imprime
	printf("%i\n", resultado);
	return 0;
}