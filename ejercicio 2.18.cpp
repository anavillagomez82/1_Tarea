#include <iostream>

int main() {
  int num1, num2;

  std::cout << "Ingrese el primer número entero: ";
  std::cin >> num1;

  std::cout << "Ingrese el segundo número entero: ";
  std::cin >> num2;

  if (num1 > num2) {
    std::cout << num1 << " es mayor" << std::endl;
  } else if (num1 < num2) {
    std::cout << num2 << " es mayor" << std::endl;
  } else {
    std::cout << "Los numeros son iguales" << std::endl;
  }

  return 0;
}