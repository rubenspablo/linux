#include <stdio.h>
int main() {
   int idade = 44;
   float altura = 1.91;
   char letra = 'R';
   char nome[20] = "Rubens Pablo";

   printf("A idade do %s é: %d\nque tem no começo do nole a letra: %c\ne ten a altura de %.2f\n",nome, idade, letra, altura);
    return 0;


   /*

    A função printf() é utilizada para imprimir dados na tela. Ela aceita uma string de 
    formato, que pode conter texto e especificadores de formato. Os especificadores de formato 
    são usados para indicar o tipo de dado que será impresso.


   A seguir, você tem uma lista dos principais especificadores utilizados: 

    %d: Imprime um inteiro no formato decimal.
     
    %i: Equivalente a %d.
     
    %f: Imprime um número de ponto flutuante no formato padrão.
     
    %e: Imprime um número de ponto flutuante na notação científica.
     
    %c: Imprime um único caractere.
     
    %s: Imprime uma cadeia (string) de caracteres.
   */
   
}