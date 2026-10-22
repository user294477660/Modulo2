#include <stdio.h>
#include <locale.h>

int main(void)
{

	setlocale(LC_ALL, "");
	int n = 0, n1, somador = 0, i;
	printf("Quantos numeros quer somar? ");
	scanf_s("%d", &n);
	for (i = 0; i < n; i++)
	{
		printf("Digite um numero: ");
		scanf_s("%d", &n1);
		somador += n1;
	}
	printf("A soma dos numeros: %d\n", somador);

	return 0;
}