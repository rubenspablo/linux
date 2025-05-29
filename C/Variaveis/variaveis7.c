#include <stdio.h>
int indade = 25;
int quantidade = 87;
float altura = 1.98;
char letra = 'A';
char nome[21] = "Rubens Pablo";
int main() {
    printf("Dados antigos");
    printf("Idade: %d\n", indade);
    printf("Quantidade: %d\n", quantidade);
    printf("Altura: %.2f\n", altura);
    printf("Letra: %c\n", letra);
    printf("Nome: %s\n", nome);
    printf("\nAtualize seus dados!\n");
    

    printf("\nNovos valores:\n");
    printf("Qual a dua idade? ");
    scanf("%d", &indade);
    printf("Idade: %d\n", indade);
    printf("Qual a quantidade? ");
    scanf("%d", &quantidade);
    printf("Quantidade: %d\n", quantidade);
    printf("Qual a sua altura? ");
    scanf("%f", &altura);
    printf("Altura: %.2f\n", altura);
    printf("Qual a letra inicial do seu nome? ");
    scanf(" %c", &letra); // Note the space before %c to consume any leftover newline character
    printf("Letra: %c\n", letra);
    printf("Qual o seu nome? ");
    scanf("%20s", nome); // Limiting input to avoid buffer overflow
    // Note: %20s limits the input to 20 characters to prevent buffer overflow
    printf("Nome: %[^\n]65", nome);

    return 0;
}