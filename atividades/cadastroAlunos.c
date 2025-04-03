#include <stdio.h>

int main(){

    char nome[50];
    int idade, matricula;
    float altura;

    printf("Qual o seu nome? ");
    scanf("%s", &nome);

    printf("Qual a sua idade? ");
    scanf("%d", &idade);

    printf("Qual a sua altura? ");
    scanf("%f", &altura);

    printf("Qual a sua matrícula? ");
    scanf("%d", &matricula);

    printf("Nome do aluno: %s - Matrícula: %d \n", nome, matricula);
    printf("Idade: %d - Altura: %.2f \n", idade, altura);

    return 0;
}