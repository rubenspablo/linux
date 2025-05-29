#include <stdio.h>
#include <stdbool.h>
int main(){

 int pontuacao = 100;
 float taxa_de_juros = 0.05;
 char inicial = 'X';
 bool logado = false;
 char nome[50]; 

 printf("Qual o seu Nome? ");
 scanf("%s", nome);
 printf("qual a taxa de juros? ");
 scanf("%f", &taxa_de_juros);
 printf("Qual a pontuação? ");
 scanf("%d", &pontuacao);
 printf("A inicial do seu nome é: %c\n", inicial);
 printf("Você está logado? %s\n", logado ? "sim" : "não");
 return 0;

}