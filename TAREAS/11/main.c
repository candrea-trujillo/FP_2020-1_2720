#include<stdio.h>
#include<stdlib.h>
//utilizaremos funcion raiz
double raiz(double n, double tolerancia, double resultado){
	//se declaran variables
	double division, diferencia;
	//algoritmo
	division=n/resultado;
	diferencia=resultado-division;
	//diferencia con valor absoluto
	diferencia=diferencia>0? diferencia:-diferencia;
	//en caso de que la diferencia sea menor o igual que la tolerancia 
	//regresa el candidato a resultado
	if (diferencia<=tolerancia)
	{
		return resultado;
	}
	//en caso negativo 
	else{
		//nuevo candidato
		resultado=(resultado+division)/2;
		//se regresa la funcion con el candidato nuevo
		return raiz(n, tolerancia,resultado);
	}
}
int main(int argc, char *argu[])
{
	//se declaran 3 variables 
	double n, tolerancia, resultado;
	//los argumentos se guardan en las siguientes variables
	n=atof(argu[1]); tolerancia=atof(argu[2]); resultado=atof(argu[3]);
	//se guarda el resultado
	resultado=raiz(n, tolerancia, resultado);
	//imprime
	printf("%lf\n", resultado);
	return 0;
}