#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "");
    int n;
    printf("Digite um numero: ");
    scanf_s("%d", &n);
    while (n >= 0) {
        printf("%d\n", n);
        n--;
    }
    return 0;
}