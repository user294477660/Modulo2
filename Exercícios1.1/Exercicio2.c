#include <stdio.h>
#include <locale.h>

int main(void)

{
	setlocale(LC_ALL, "");
	float kmi, kmf, tl, r;
	printf("Quantos km inicias registaste: ");
	scanf_s("%f", &kmi);
	printf("Quantos km finais registaste: ");
	scanf_s("%f", &kmf);
	printf("Quantos litros gastos registaste: ");
	scanf_s("%f", &tl);
	r = tl * 100 / (kmf - kmi);
	printf("Total gasto em 100km: % .2f\n", r);

}