#include <stdio.h>
#include <stdbool.h>
int main() {

int idade;
float altura;
char nome [50];
bool esta_ativo;

idade=44;
altura=1.91;
printf ("Digite seu nome: ");
scanf ("%s", nome); // le a string do tecladop e armazena na variavel nome
esta_ativo = false; // atribui  valor booleano true a variavel esta_ativo

printf("Nome: %s\n", nome);
printf("Idade: %d\n", idade);
printf("Altura:%.2f\n", altura);
printf("Esta ativo? %s\n", esta_ativo ? "sim" : "não");
return 0;
}






