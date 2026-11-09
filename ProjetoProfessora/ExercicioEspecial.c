#include <stdio.h>
#include <locale.h>

int main(void)
{
	setlocale(LC_ALL, "");
	float tempi, tempf;
	printf("Diz a temperatura inicial: ");
	scanf_s("%f", &tempi);
	printf("Diz a temperatura final: ");
	scanf_s("%f", &tempf);
	if (tempi < 35.5 && tempf < 35.5)
	{
		printf("És anfíbio ");
	}
	else if ((tempi > 35.5 && tempi < 37) && (tempf > 35.5 && tempf < 37))
	{
		printf("Temperatura Normal\n");
	} 
	else
	{
		printf("Febre\n");
		if (tempi > tempf)
			printf("Temperatura Baixou\n");
		else if (tempi < tempf)
			printf("Temeperatura Aumentou\n");
		else
			printf("Temperatura manteve\n");
	}

}