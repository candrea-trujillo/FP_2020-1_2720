#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(int argc, char const *argu[])
{
	int n1,x;
	float n2, resultado;

	n1=atoi(argu[0]);
	n2=atoi(argu[1]);

	x=n1;

	switch(x){
		case 0:
		resultado=n2 * 1.8;
		resultado=resultado+32;
		printf("%.2f\n", resultado);
		break;
		case 1:
		resultado=n2 - 32;
		resultado=resultado/1.8;
		printf("%.2f\n", resultado);
		break;
		default:
		printf("Esta opcion no existe\n");
		break;
	}
	return 0;
}