#include <iostream>
using namespace std;

int fib_recursion(int numero)
{
  if (numero < 2)
  {
    return numero;
  }
  return fib_recursion(numero - 2) + fib_recursion(numero - 1);
}

void fib_series(int numero)
{
  int anteriores[2] = {0, 1};
  cout << anteriores[0] << " " << anteriores[1] << " ";
  if (numero < 2)
  {
    return;
  }
  int suma;
  for (int i = 2; i <= numero; i++)
  {
    suma = anteriores[0] + anteriores[1];
    anteriores[0] = anteriores[1];
    anteriores[1] = suma;
    cout << suma << " ";
  }
}

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

  cout << "Resultado: " << fib_recursion(mostrar_hasta) << "\n"; // Utilizando recursividad
  cout << "Serie: ";
  fib_series(mostrar_hasta); // Utilizando bucles
  cout << "\n";
  system("pause");
  return 0;
}