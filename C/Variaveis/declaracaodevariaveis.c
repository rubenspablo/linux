#include <stdio.h>
int idade;
int quantidade = 1;
float altura = 1.91;
char letra = 'R';
char nome[20] = "Rubens Pablo";

int main() {
    idade = 18;
    printf("Idade: %d\n", idade);
    printf("Quantidade: %d\n", quantidade);
    printf("Altura: %.2f\n", altura);
    printf("Letra: %c\n", letra);
    printf("Nome: %s\n", nome);
    return 0;
}
