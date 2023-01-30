#include <iostream>
using namespace std;

int main()
{
  cout << "SERIE FIBONACCI \n";
  cout << "Desc.: Programa que retorna el numero en la posicion de la serie fibonacci ingresada por el usuario \n\n";

  int mostrar_hasta;
  do
  {
    cout << "Ingresa un numero mayor o igual a uno que indique la posicion hasta la que deseas mostrar la serie: ";
    cin >> mostrar_hasta;
  } while (mostrar_hasta < 1);

  cout << "\n";
  system("pause");
  return 0;
}