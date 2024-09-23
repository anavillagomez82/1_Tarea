#include <iostream>

int main() {
  int num1, num2, num3, num4, num5;
  int mayor, menor;

  std::cout << "Ingrese cinco enteros: ";
  std::cin >> num1 >> num2 >> num3 >> num4 >> num5;

  mayor = num1;
  menor = num1;

  if (num2 > mayor) {
    mayor = num2;
  }
  if (num2 < menor) {
    menor = num2;
  }

  if (num3 > mayor) {
    mayor = num3;
  }
  if (num3 < menor) {
    menor = num3;
  }

  if (num4 > mayor) {
    mayor = num4;
  }
  if (num4 < menor) {
    menor = num4;
  }

  if (num5 > mayor) {
    mayor = num5;
  }
  if (num5 < menor) {
    menor = num5;
  }

  std::cout << "Mayor: " << mayor << std::endl;
  std::cout << "Menor: " << menor << std::endl;

  return 0;
}