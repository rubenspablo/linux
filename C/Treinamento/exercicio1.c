#include <stdio.h>
int main() {

int idade, quantidade, matricula;
char materia[50];
float altura;
char nome[50];
char apelido[50];

printf("Qual a sua idade? ");
scanf("%d", &idade);

printf("Qual a materia que voce estuda? ");
scanf("%s", materia);

printf("Qual a sua altura? ");
scanf ("%f", &altura);

printf("Qual o seu nome? ");
scanf ("%s", nome);

printf("Qual o seu apelido? ");
scanf ("%s", apelido);



printf("%s, %s, %d anos, %.2f metros, estuda %s\n", nome, apelido, idade, altura, materia);






}