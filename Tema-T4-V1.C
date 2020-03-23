//Problema 3 - Problema Prezenta
/*
Sa se realizeze un program care interschimba 2 valori folosind
un pointer ca variabila auxiliara.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int y, z, *x;
	x = (int *)malloc(sizeof(int));
	printf("y=");
	scanf("%d", &y);
	printf("z=");
	scanf("%d", &z);
	*x = y;
	y = z;
	z = *x;
	printf("y=%d z=%d\n", y, z);
	system("pause");
	return 0;
}