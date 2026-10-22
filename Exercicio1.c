#include <stdio.h>
#include <locale.h>

int main(void)
{
	setlocale(LC_ALL, "");
	int p1, p2, p3, p4;
	double media;
	printf("Diz um número: ");
	scanf_s("%d", &p1);
	printf("Diz um segundo número: ");
	scanf_s("%d", &p2);
	printf("Diz um terceiro número: ");
	scanf_s("%d", &p3);
	printf("Diz um quarto número: ");
	scanf_s("%d", &p4);
	media = (p1 + p2 + p3 + p4) / 4;
	printf("%.2f", media);

	return 0;
}