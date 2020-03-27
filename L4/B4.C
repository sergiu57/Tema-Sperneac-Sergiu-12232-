//Problema 4 - Problema Tema
/*
Sa se realizeze un program care imi transforma un numar zecimal intr-un numar binar,
cifrele binare vor fi insiruite intr-un sir de elemente folosind pointer-ul.
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct binar
{
	int x;
	struct binar *urm;
}SSA;

SSA *adaugare(SSA *prim, int k)
{
	SSA *y, *z;
	y = (SSA *)malloc(sizeof(SSA));
	y->x = k;
	y->urm = NULL;

	if (prim == NULL) return y;
	else {
		z = prim;

		while (z->urm != NULL)
		{
			z = z->urm;
		}
		z->urm = y;
		return prim;
	}
}

void afisare(SSA *prim)
{
	SSA *y;

	y = prim;

	while (y)
	{
		printf("%d ", y->x);
		y = y->urm;
	}
}

int main()
{
	int n, k, *v, nr = 0;
	SSA *prim;
	prim = NULL;
	printf("n="); scanf("%d", &n);
	v = (int*)malloc(8 * sizeof(int));
	while (n)  // Impart numarul sa il obtin in baza 2
	{
		if (n % 2) k = 1;
		else k = 0;
		*(v + nr) = k; 
		n = n / 2;
		nr++;
	}
	nr--; 

	while (nr >= 0)
	{
		prim = adaugare(prim, *(v + nr));
		nr--;
	}
	afisare(prim); // afisez nodurile listei
	system("pause");
	return 0;
}
