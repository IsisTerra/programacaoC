#include <stdio.h>

int main()
{
    char nome[20];
    int idade;
    float altura;

    printf("Qual o seu nome? ");
    scanf("%s", &nome);
    printf("O seu nome é %s\n", nome);

    printf("Qual a sua idade? ");
    scanf("%d", &idade);
    printf("A sua idade é %d\n", idade);

    printf("Qual a sua altura?");
    scanf("%f", &altura);
    printf("A sua altura é %.2f\n", altura);


}