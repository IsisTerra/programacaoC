#include <stdio.h>

int main()
{
    int idade = 26;
    float altura = 1.67;
    char nome[20] = "Isis";
    char inicial = 'I';
    double saldoBancario = 12345.67;
    
    printf("Idade é: %d \n", idade);
    printf("Altura é: %.2f \n", altura);
    printf("Nome é: %s \n", nome);
    printf("Saldo bancário é: %.2f \n", saldoBancario);
    printf("Inicial do nome é: %c \n", inicial);

    return 0;
}