#include <stdio.h>
#include <locale.h>

int main(void)

{
	int n = 1;
	do
	{
		printf("Digite um numero: ");
		scanf_s("%d", &n);
		if (n != 0)
		{
			if (n % 2 == 0)
			{
				printf("O numero e par.\n");
			}
			else
			{
				printf("O numero e impar.\n");
			}
		}
	} while (n != 0);
	printf("Digitar 0 sai do proprama");
	return 0;
}