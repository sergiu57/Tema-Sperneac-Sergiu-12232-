//Problema 7 - Problema Tema
/*Se da un numar natural N. 
Sa se afiseze suma bitiilor fiecarui numar de la 1 la N.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int x, y = 0, z, k;
	printf("x=");
	scanf("%d", &x);
	for (z = 1; z <= x; z++)
	{
		for (k = 0; k <= 7; k++)
			if (1 & (z >> k))
				y++;
	}
	printf("%d\n", y);
	system("pause");
	return 0;
}
