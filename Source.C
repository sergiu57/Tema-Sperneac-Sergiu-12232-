#include <stdio.h>
#include <stdlib.h>

int main()
{
	int x, c = 0, i, k;
	printf("x=");
	scanf("%d", &x);
	for (i = 1; i <= x; i++)
	{
		for (k = 0; k <= 7; k++)
			if (1 & (i >> k))
				c++;
	}
	printf("%d\n", c);
	system("pause");
	return 0;
}
