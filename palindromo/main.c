#include <stdio.h>

int main()
{
  int palindromo(int valor);

  int palindromoCerto(int valor);

  printf("Valor %d \n", palindromo(0));

  printf("Valor %d \n", palindromoCerto(0));

  return 0;
}

int palindromo(int valor)
{
  int num, invertido, digito;
  num = digito;
  invertido = 0;
  while (num != 0)
  {
    digito = num % 10;
    invertido = (invertido * 10) + digito;
    num = num % 10;
  }
  if (valor == invertido)
    return 1;
  else
    return 0;
}

int palindromoCerto(int valor)
{
  int num, invertido, digito;

  // num = digito;
  // -> Trecho modificado abaixo
  num = valor;
  invertido = 0;

  while (num != 0)
  {
    digito = num % 10;
    invertido = (invertido * 10) + digito;

    // num = num % 10; // -> Trecho modificado abaixo
    num = num / 10;
  }

  if (valor == invertido)
    return 1;
  else
    return 0;
}
