#include <iostream>

int main() {
  int num1, num2, num3;

  std::cout << "Ingrese tres enteros diferentes: ";
  std::cin >> num1 >> num2 >> num3;

  int suma = num1 + num2 + num3;
  double promedio = static_cast<double>(suma) / 3;
  int producto = num1 * num2 * num3;

  int menor = num1;
  if (num2 < menor) menor = num2;
  if (num3 < menor) menor = num3;

  int mayor = num1;
  if (num2 > mayor) mayor = num2;
  if (num3 > mayor) mayor = num3;
  
  std::cout << "La suma es " << suma << std::endl;
  std::cout << "El promedio es " << promedio << std::endl;
  std::cout << "El producto es " << producto << std::endl;
  std::cout << "El menor es " << menor << std::endl;
  std::cout << "El mayor es " << mayor << std::endl;

  return 0;
}