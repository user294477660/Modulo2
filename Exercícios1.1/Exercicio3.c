#include <stdio.h>
#include <locale.h>

int main(void)

{
	setlocale(LC_ALL, "");
	float nota;
	printf("Digite a sua nota: ");
	scanf_s("%f", &nota);
	if (nota < 9.5)
	{
		printf("Reprovado, Nao desista e estude");
	}
	else {
		printf("Aprovado, Parabens");
	}

	return 0;

}
