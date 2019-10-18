#include<stdio.h>
int main(){
	float x, y, z;
	printf("Ingresa un numero:\n");
	scanf("%f", &x);
	printf("Ingrese un segundo numero:\n");
	scanf("%f", &y);

		z=x+y;
		printf("suma: %.2f\n", z);
		z=x-y;
		printf("resta: %.2f\n", z);
		z=x*y;
		printf("multiplicacion: %.2f\n", z);
		z=x/y;
		printf("division: %.2f", z);

	return 0;
}