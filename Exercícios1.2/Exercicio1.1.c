#include<stdio.h>
#include <locale.h>

int main(void)
{
	setlocale(LC_ALL, "");
	int n, x;
	printf("Diz um número: ");
	scanf_s("%d", &n);
	for (x = 1; x < 11; x++)
	{
		printf("%d", (n * x));
		printf("\n");
	}
	return 0;
}