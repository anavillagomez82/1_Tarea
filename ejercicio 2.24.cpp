#include <iostream>

using namespace std;

int main() {
  int num1, num2;

  cout << "Ingrese el primer entero: ";
  cin >> num1;

  cout << "Ingrese el segundo entero: ";
  cin >> num2;

  // Determinar si cada entero es impar o par
  if (num1 % 2 != 0) {
    cout << num1 << " es un número impar." << endl;
  } else {
    cout << num1 << " es un número par." << endl;
  }

  if (num2 % 2 != 0) {
    cout << num2 << " es un número impar." << endl;
  } else {
    cout << num2 << " es un número par." << endl;
  }

  // Calcular la suma de los dos enteros
  int suma = num1 + num2;

  // Determinar si la suma es impar o par
  if (suma % 2 != 0) {
    cout << "La suma de " << num1 << " y " << num2 << " es un número impar." << endl;
  } else {
    cout << "La suma de " << num1 << " y " << num2 << " es un número par." << endl;
  }

  return 0;
}