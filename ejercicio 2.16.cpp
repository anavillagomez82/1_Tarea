#include <iostream>

int main() {
  int num1, num2;

  std::cout << "Ingrese el primer número: ";
  std::cin >> num1;

  std::cout << "Ingrese el segundo número: ";
  std::cin >> num2;

  if (num2 == 0) {
    std::cout << "Error: no se puede dividir por cero!" << std::endl;
    return 1;
  }

  int suma = num1 + num2;
  int producto = num1 * num2;
  int diferencia = num1 - num2;
  int cociente = num1 / num2;

  std::cout << "Suma: " << suma << std::endl;
  std::cout << "Producto: " << producto << std::endl;
  std::cout << "Diferencia: " << diferencia << std::endl;
  std::cout << "Cociente: " << cociente << std::endl;

  return 0;
}