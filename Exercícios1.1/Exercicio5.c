#include <stdio.h>
#include <locale.h>

int main(void)

{
	setlocale(LC_ALL, "");
	int n, acumulador = 0, somador = 0, media;
	while (acumulador < 1000)
	{
		printf("Digite um numero: ");
		scanf_s("%d", &n);
		acumulador = acumulador + n;
		somador = somador + 1;
	}
	media = acumulador / somador;
	printf("A media dos numeros: %d\n", media);

	return 0;

}