#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "");
    int n, maior, menor;
    printf("Digita um numero: ");
    scanf_s("%d", &n);
    maior = n;
    menor = n;
    while (n != 0) {
        if (n > maior)
            maior = n;
        if (n < menor)
            menor = n;
        printf("Diz um numero: ");
        scanf_s("%d", &n);
    }
    printf("Maior numero: %d\n", maior);
    printf("Menor numero: %d\n", menor);
    return 0;
}