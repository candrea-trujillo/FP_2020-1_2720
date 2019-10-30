#include<stdio.h>
#include<stdlib.h>
int main(int argc, char* argu[]){
	int resultado;//el que se va a imprimir 
	int argui[argc];//lista donde se guarden los valores enteros 
	//se ocuparan dos for uno para excluir el argu[i]
	for (int i = 1; i < argc; i++){
		//neutro multiplicativo 
		resultado=1;
		//el siguiente for realizara la operacion sin expcluir
		for (int j = 1; j < argc; j++){
		//se copiara la lista argu[]que es string a argui[] que es int
		argui[j]=atoi(argu[j]);
		//se indica el resultado sin excluir a argu[i]
		resultado=resultado*argui[j];
		}
		//una vez que este el resultado en el segundo for se excluye a argu[i]
		//con su inverso multiplicativo
		resultado=resultado/argui[i];
		printf("%i\n", resultado);
	}
	return 0;
}