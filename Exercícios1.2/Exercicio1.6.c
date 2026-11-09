#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int ut, contador = 0;
	srand(time(NULL));
	int num = rand() % 1000 + 1;
	do
	{
		printf("Digite um numero: \n");
		scanf_s("%d", &ut);
		if (ut < num)
			printf("Numero maior\n");
		else if (ut > num)
			printf("Numero menor\n");
		contador++;
	} while (num != ut);
	printf("Acertas-te o numero em %d tentativas", contador);

	return 0;
}