#include <stdio.h>
#include <locale.h>

int main(void) 
{
    int op;
    float n1, n2, resultado;
    printf("1=Somar  2=Subtrair  3=Multiplicar  4=Dividir\n");
    scanf_s("%d", &op);
    printf("Digite dois numero: ");
    scanf_s("%f %f", &n1, &n2);
    {
        if (op == 1)
            resultado = n1 + n2;
    }
    {
        if (op == 2)
            resultado = n1 - n2;
    }
    {
        if (op== 3)
            resultado = n1 * n2;
    }
    {
        if (op == 4)
            resultado = n1 / n2;
    }
    printf("Resultado: %.2f\n", resultado);

    return 0;
}