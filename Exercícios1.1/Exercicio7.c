#include <stdio.h>
#include <locale.h>

int main(void)
{

	setlocale(LC_ALL, "");
	int n = 1;
	while (n != 0)
	{
		printf("Digite um numero: ");
		scanf_s("%d", &n);
		if (n < 0)
		{
			printf("O numero e negativo.\n");
		}
		else if (n == 0)
		{
			printf("Digitar 0 vai sair do programa. ");
		}
		else
		{
			printf("O numero e positivo.\n");
		}

	}
		return 0;
}