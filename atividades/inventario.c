#include <stdio.h>

int main()
{

    char produtoA[30] = "Produto A";
    char produtoB[30] = "Produto B";

    unsigned int estoqueA = 1000;
    unsigned int estoqueB = 2000;

    float valorA = 10.50;
    float valorB = 20.40;

    unsigned int estoqueMinimoA = 500;
    unsigned int estoqueMinimoB = 2500;

    double valorTotalA;
    double valorTotalB;

    int resultadoA, resultadoB;

//Exibir as informações dos produtos

printf("O produto %s tem em estoque %u e o valor unitário é R$ %.2f\n", produtoA, estoqueA, valorA);
printf("O produto %s tem em estoque %u e o valor unitário é R$ %.2f\n", produtoB, estoqueB, valorB);

//Comparações com o valor minímo do estoque
resultadoA = estoqueA > estoqueMinimoA;
resultadoB = estoqueB > estoqueMinimoB;

printf("O produto %s tem estoque minímo %d\n", produtoA, resultadoA);
printf("O produto %s tem estoque minímo %d\n", produtoB, resultadoB);

//Comparações entre os valores totais dos produtos

printf("O valor total de A (R$ %.2f) é maior do que o valor total de B (R$ %.2f)? %d \n", estoqueA * valorA, estoqueB * valorB, (estoqueA * valorA) > (estoqueB * valorB));

    return 0;
}