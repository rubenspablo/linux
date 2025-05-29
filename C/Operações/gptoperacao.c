#include <stdio.h>

int main() {
  int a = 10;
  int b = 5;
  int soma = a + b;
  int diferenca = a - b;
  int produto = a * b;
  int quociente = a / b;
  int resto = a % b;

  printf("Soma: %d\n", soma);
  printf("Diferença: %d\n", diferenca);
  printf("Produto: %d\n", produto);
  printf("Quociente: %d\n", quociente);
  printf("Resto: %d\n", resto);

  a += 3; // a = a + 3
  printf("Novo valor de a: %d\n", a);

  return 0;
}