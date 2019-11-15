#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char *argv[]){
	//variables
	int num1, num2, num3, a, z;
	float r, s, t, u, m=1, resultado, x;
	//de char a int 
	num1=atoi(argv[1]);
	a=num1;
	num2=atoi(argv[2]);
	t=num2;
	num3=atoi(argv[3]);
	z=num3;
	//verificar si es el caso de un numero imaginario o no 
	u= t * t;
	s= 4 * a * z;
	u= u - 1;
	if (u==0)
	{
		t=-t;
		a=2*a;
		resultado=t/a;
		printf("%.2f\n", resultado);
	}
	else{
		if (u>=0)
		{
			a=2*a;
			m=sqrt(u);
			m=m/a;
			t=-t;
			t=t/a;
			resultado=t+m;
			printf("%.2f\n", resultado);
			resultado=t-m;
			printf("%.2f\n", resultado);
		}
		else{
			a=2*a;
			u=-u;
			m=sqrt(u);
			m=m/a;
			t=-t;
			t=t/a;
			printf("%f+%.2f r\n", t, m);
			printf("%f-%.2f r\n", t, m);
		}
	}
	return 0;
}