Tema 3 - Problema 7 

#include <stdio.h>
#include <stdlib.h>
int n, c;
int main()
{
	printf("N="); scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		for (int k = 0; k <= 7; k++)
			if (1 & (i >> k))
				c++;
	}
	printf("%d\n", c);
	system("pause");
	return 0;
}
