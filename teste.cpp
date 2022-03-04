#include <stdio.h>

int main()
{
    int ano1, idade, a, b, soma;
    a = 2;
    b = 5;
    soma = (a + b);
    printf("%d\n", soma);
    printf("Em que ano voce nasceu?\n");
    scanf("%d",&ano1);
    idade = (2022 - ano1);
    printf("Sua idade e %d.", idade);
    return 0;
}