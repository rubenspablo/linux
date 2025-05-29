#include <stdio.h>
int main() {
    int idade, matricula;
    float altura;
    char nome[50];


    printf("digite sua idade? ");
    scanf("%d", &idade);
    printf ("qual q sua matricula? ");
    scanf("%d", &matricula);
    printf("qual a sua altura? ");
    scanf("%f", &altura);
    printf("qual o seu nome? ");
    scanf("%s", nome);
    printf("%s, %d anos, %.2f metros, matricula %d\n", nome, idade, altura, matricula);
    return 0;



}