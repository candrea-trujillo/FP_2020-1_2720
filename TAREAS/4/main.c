#include<stdio.h>
#include<stdlib.h>
int main(){
	float m, n, p ,r;
	printf("Ingrese primer numero:\n");
	scanf("%f", &m);
	printf("Ingrese el segundo numero:\n");
	scanf("%f", &n);

		p=m+n;
		r=p/2;
		printf("%.2f\n", r);
		return 0;
}