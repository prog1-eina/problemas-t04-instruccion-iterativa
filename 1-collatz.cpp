/*******************************************************************************
 * Autores: Miguel Ángel Latre
 * Última revisión: 30-9-2020
 * Resumen: Programa interactivo que pide al usuario un número natural y escribe
 *          en la pantalla la secuencia de Collatz generada por dicho número.
 *          Problemas de Programación 1 sobre composición iterativa (tema 4).
 ******************************************************************************/
#include <iostream>
using namespace std;

/*
 * Programa que pide al usuario un número natural y escribe en la pantalla la
 * secuencia de Collatz generada por dicho número.
 */
int main() {
    cout << "Escriba un número natural: ";
    unsigned n;
    cin >> n;

    cout << "La secuencia de Collatz generada por " << n << " es:" << endl;
    cout << n;
    while (n != 1) {
        if (n % 2 == 0) {
            n = n / 2;
        }
        else {
            n = 3 * n + 1;
        }
        cout << ", " << n;
    }
    cout << endl;
}
