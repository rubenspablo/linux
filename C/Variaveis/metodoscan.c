#include <stdio.h>

int main() {
    int idade;
    float altura;
    char opcao;
    char nome[40];

    printf("Digite sua idade:");
    scanf("%d", &idade);
    printf("%d Anos\n", idade);
    printf("Digite sua altura: ");
    scanf("%f", &altura);
    printf("%.2f Metros\n", altura);
    printf("Digite a primeira letra do seu nome: ");
    scanf(" %c", &opcao); // Note the space before %c to consume any leftover newline character
    printf("A primeira letra do seu nome é: %c\n", opcao);
    printf("digite seu nome Completo: ");
    scanf( " %[^\n]", nome);
    printf("Seu nome completo é %s\n", nome);
    printf("Então senho %s, você tem %d anos e %.2f metros de altura\n", nome, idade, altura);
    printf("A primeira letra do seu nome é: %c\n", opcao);
}
