#include <stdio.h>
int indade = 25;
int quantidade = 87;
float altura = 1.98;
char letra = 'A';
char nome[21] = "Rubens Pablo";
int main() {
    printf("Idade: %d\n", indade);
    printf("Quantidade: %d\n", quantidade);
    printf("Altura: %.2f\n", altura);
    printf("Letra: %c\n", letra);
    printf("Nome: %s\n", nome);

    // Atribuindo novos valores
    indade = 30;
    quantidade = 100;
    altura = 1.85;
    letra = 'B';
    snprintf(nome, sizeof(nome), "Pedro Alvares Cabral");

    printf("\nNovos valores:\n");
    printf("Idade: %d\n", indade);
    printf("Quantidade: %d\n", quantidade);
    printf("Altura: %.2f\n", altura);
    printf("Letra: %c\n", letra);
    printf("Nome: %s\n", nome);

    return 0;
}