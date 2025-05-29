#include <stdio.h>
// #include <string.h> // Needed if you use strcspn for fgets later

int main() {
    int idade, matricula;
    float altura;
    char nome[50];

    printf("digite sua idade? \n"); // Added \n
    scanf("%d", &idade);

    // Consume the newline character left by scanf("%d", ...) if the next input is fgets or scanf("%c")
    // For scanf("%d") followed by another scanf("%d") or scanf("%f") or scanf("%s"), this is usually not an issue
    // because %d, %f, %s skip leading whitespace.

    printf("qual q sua matricula? \n"); // Added \n
    scanf("%d", &matricula);

    printf("qual a sua altura? \n"); // Added \n
    scanf("%f", &altura);

    printf("qual o seu nome? \n"); // Added \n
    // For reading names, especially with spaces, fgets is safer:
    // getchar(); // consume the newline left by scanf %f
    // fgets(nome, sizeof(nome), stdin);
    // nome[strcspn(nome, "\n")] = 0; // remove trailing newline from fgets
    // However, if you stick with scanf %s for simplicity for now:
    scanf("%s", nome); // This will read only up to the first space.

    printf("%s, %d anos, %.2f metros, matricula %d\n", nome, idade, altura, matricula);
    return 0;
}