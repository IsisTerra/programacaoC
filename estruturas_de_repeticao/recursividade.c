#include <stdio.h>

void recursivo(int numero) //variável local
{
    if (numero > 0)
    {
        printf("%d \n", numero); //A ordem muda a impressão do resultado (o printf ser antes ou depois do decremento)

        recursivo(numero - 1); //Chamar, decrementando
    }
}

int main()
{
    int quantidade = 10; //Precisa ser do mesmo tipo que declarado no recursivo (int numero);

    printf("Contagem regressiva...");
    recursivo(quantidade);

    return 0;
}