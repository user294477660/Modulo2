#include <stdio.h>
#include <locale.h>
int main(void)
{
	setlocale(LC_ALL, "");
	int n1, n2, n3, maior;
	printf("Diz um numero: ");
	scanf_s("%d", &n1);
	printf("Diz outro numero: ");
	scanf_s("%d", &n2);
	printf("Diz outro numero: ");
	scanf_s("%d", &n3);
	maior = n1;
	if (maior < n2)
	{
		maior = n2;
	}
	if (maior < n3)
	{
		maior = n3;
	}
	printf("O maior número é: %d\n", maior);

	return 0;
}