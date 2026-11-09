#include <stdio.h>
#include <locale.h>

int main(void)
{
	setlocale(LC_ALL, "");
	int n = 1;
	if (n != 0)
	{
		while (n != 0)
		{
			printf("Diz um numero: ");
			scanf_s("%d", &n);
			if (n % 3 == 0)
			{
				printf("O numero %d e multiplo de 3\n", n);
			}
			if (n % 5 == 0)
			{
				printf("O numero %d e multiplo de 5\n", n);
			}
		}
	}
	printf("Ao colocar 0 o programa nao funciona");

	return 0;
}
