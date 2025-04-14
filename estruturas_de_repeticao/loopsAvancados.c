#include <stdio.h>

int main()
{
    // for (int i = 0, j = 10; i < j; i++, j--) //exemplo de loop com múltiplas variáveis

    // {
    //     printf("i = %d, j = %d\n", i, j);
    // }

    // for (int i = 0, j = 10; i < 5 && j > 5; i++, j--) // exemplo de loops com condições múltiplas
    // {
    //     printf("i = %d, j = %d\n", i, j);
    // }

    for (int i = 0; i < 100; i += (i % 2 == 0) ? 1 : 2) //exemplo de loops com atualizações complexas
    {
        printf("%d ", i);
    }

    return 0;
}