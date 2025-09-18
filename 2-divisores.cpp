/******************************************************************************
 * Autores: Javier Martínez y Miguel Ángel Latre
 * Última revisión: 30-9-2022
 * Resumen: Programa interactivo que escribe en la pantalla los divisores de
 *          un número introducido por el usuario.
 *          Problemas de Programación 1 sobre composición iterativa (tema 4).
 *****************************************************************************/
#include <iostream>
using namespace std;

/*
 * Programa que solicita al usuario un número positivo y escribe en la
 * pantalla los divisores de dicho número.
 */ 
int main() {
    cout << "Escriba un número entero positivo: ";
    unsigned n;
    cin >> n;
    
    cout << "DIVISORES DE " << n << ":" << endl;
    
    // La variable «divisor» servirá para ir identificando divisores de «n». 
    unsigned divisor = 1;

    while (divisor <= n / 2) {
        // Se recorren los posibles divisores de n en [1, n/2]
        if (n % divisor == 0) {
            // Si «divisor» realmente divide a n, se escribe en la pantalla
            cout << divisor << endl;
        }
        // Se incrementa el valor de «divisor» para la siguiente iteración
        divisor++;
    }
    // Se escribe el valor de «n», que es divisor de sí mismo.
    cout << n << endl;
}