#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(int argc, char *argu[]){
	//variables que ingresan
	float num1, num2;
	//asignacion de valores
	num1=atof(argu[1]);
	num2=atof(argu[2]);
	//se imprime el resultado 
	printf("%.2f\n", pow (num1, num2));
	return 0;
}