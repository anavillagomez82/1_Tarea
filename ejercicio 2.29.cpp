#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  cout << "Longitud de la cara del cubo (cm)\tSuperficie del cubo (cm^2)\tVolumen del cubo (cm^3)" << endl;

  for (int i = 0; i <= 4; i++) {
    int surfaceArea = 6 * i * i;
    int volume = i * i * i;

    cout << i << "\t\t" << surfaceArea << "\t\t\t" << volume << endl;
  }

  return 0;
}