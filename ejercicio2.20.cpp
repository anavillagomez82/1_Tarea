#include <iostream>

int main() {
  int radio;

  std::cout << "Ingrese el radio del círculo: ";
  std::cin >> radio;

  std::cout << "Diámetro: " << 2 * radio << std::endl;
  std::cout << "Circunferencia: " << 2 * 3.14159 * radio << std::endl;
  std::cout << "Área: " << 3.14159 * radio * radio << std::endl;

  return 0;
}