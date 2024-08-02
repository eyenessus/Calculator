#include <stdio.h>

int main() {
  double num1, num2;
  char op;

  printf("Seja bem vindo ao Rooby\n");
  printf("Rooby is an calculate\n");

  printf("Digite o primeiro número: ");
  scanf("%lf", &num1);

  printf("Digite o operador: ");
  scanf(" %c", &op);

  printf("Digite o segundo número: ");
  scanf("%lf", &num2);

  switch (op) {
    case '+':
      printf("%f\n", num1 + num2);
      break;
    case '-':
      printf("%f\n", num1 - num2);
      break;
    case '*':
      printf("%f\n", num1 * num2);
      break;
    case '/':
      printf("%f\n", num1 / num2);
      break;
    default:
      printf("Operador inválido\n");
      break;
  }
  
}