#include<stdio.h>
#include<math.h>

int main()
{
	int i,n,x,s;
	printf("Este programa suma los suguientes 100 digitos al cuadrado a partir del numero que le des. Dame el numero en el que empieza a sumar\n");
	scanf("%d",&i);
	for(x=i;x<=100;x++)
	{
		n=pow(x,2);
		s+=n;
		printf("%d al cuadrado=%d\n",x,n);
	}
	printf("La suma de los cuadrados es %d\n",s);
}

