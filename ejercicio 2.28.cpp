#include <iostream>
using namespace std;

int main() {
  int numero, primerdigito, segundodigito, tercerdigito, cuartodigito;

  cout << "Enter a four-digit integer: ";
  cin >> numero;

  primerdigito = numero / 1000;
  segundodigito = (numero % 1000) / 100;
  tercerdigito = (numero % 100) / 10;
  cuartodigito = numero % 10;

  cout << cuartodigito << "  " << tercerdigito << "  " << segundodigito << "  " << primerdigito << endl;

  return 0;
}
