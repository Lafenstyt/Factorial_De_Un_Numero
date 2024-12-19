#include <iostream>
using namespace std;

// Funciun iterativa para calcular el factorial de un número entero positivo
int factorialIterativo(int n) {
int resultado = 1;
for (int i = 1; i <= n; ++i) {
resultado *= i;
}
return resultado;
}
int main() {
int num;
cout << "Ingrese un numero entero positivo para calcular su factorial: ";
cin >> num;
std::cin.get();

// Validar si num es un número entero positivo
if (num < 0) {
cout << "El numero ingresado no es válido. Debe ser un número entero positivo." << endl;
return 1; // Salir del programa con un código de error
std::cin.get();
}
// Llamar a la funciun iterativa para calcular el factorial de num
int factorial = factorialIterativo(num);

// Imprimir el resultado
cout << "El factorial de " << num << " es: " << factorial << endl;
std::cin.get();
return 0;
}
