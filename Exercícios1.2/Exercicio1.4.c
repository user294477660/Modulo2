#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL,"");
    int n, i, primo = 1;
    printf("Digite um numero: ");
    scanf_s("%d", &n);
    if (n < 2)
    {
        primo = 0;
    }
    else
    {
        for (i = 2; i <= n / i; i++)
        {
            if (n % i == 0)
            {
                primo = 0;
            }
        }
    }
    if (primo == 1)
    {
        printf("O numero %d e primo\n", n);
    }
    else
    {
        printf("O numero %d nao e primo\n", n);
    }
    return 0;
}
