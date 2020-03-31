/*
7. Sa se scrie un program care verifica daca un numar citit de
la tastatura pâna în valoarea de 65535 este palindrom atât în
baza 2 cât si în baza 10. Verificarea ca numarul ar fi
palindrom sa se implementeze cu ajutorul unui stack.
A) Sa se implementeze citirea conditionata pâna la 65535.
B) Sa se realizeze transformarea din zecimal în binar.
C) Adaugarea fiecarui bit într-un stack
D) Adaugarea fiecarei cifre într-un alt stack.
E) Verificarea ca cele doua variante sunt palindrom sau nu.
585 = 1001 0 0 1001 (binary) – PALINDROM
Palindrom – O secventa de caractere care se citeste exact la
fel indiferent de directia de citire (stânga dreapta sau dreapta
– stânga)
*/

#include <stdio.h>
#include <stdlib.h>

int binar(int n)
{
	if (n) return n % 2 + 10 * binar(n / 2);
	else return 0;
}

void palindrom(int n, int *v, int *i)
{
	if (n) {
		*(v + (*i)) = n % 10;
		(*i)++;
		palindrom(n / 10, v, i);
	}
}

int main()
{
	int k, x, *v, n = 0, i, ok = 1;
	v = (int*)malloc(sizeof(int) * 5);

	do {
		printf("x=");
		scanf("%d", &x);

	} while (x > 65535);

	palindrom(x, v, &n);

	k = x;
	for (i = n - 1; i >= 0; i--)
	{
		if (*(v + i) != (x % 10)) ok = 0;
		x = x / 10;
	}
	x = k;
	if (ok == 1) printf("%d este palindrom\n", x);
	else printf("%d nu este palindrom\n", x);

	ok = 1;

	for (i = n - 1; i >= 0; i--)
	{
		*(v + i) = 0;
	}
	n = 0;

	x = binar(x);   //x va primi valoarea sa binara
	palindrom(x, v, &n);

	k = x;   //pastram valoarea lui x
	for (i = n - 1; i >= 0; i--)
	{
		if (*(v + i) != x % 10) ok = 0;
		x = x / 10;  //verificam daca este palindrom, in x avem valoarea lui x iar in v valoarea lui x inversata
	}
	x = k; //reluam valoarea lui x

	if (ok == 1) printf("%d este palindrom\n", x);  //mesaj de afisare
	else printf("%d nu este palindrom\n", x);

	return 0;
}