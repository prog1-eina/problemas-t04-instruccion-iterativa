/******************************************************************************
 * Autores: Javier Martínez y Miguel Ángel Latre
 * Última revisión: 5-10-2020
 * Resumen: Programa interactivo que indica si un número introducido por el
 *          usuario es o no perfecto.
 *          Problemas de Programación 1 sobre composición iterativa (tema 4).
 *****************************************************************************/
#include <iostream>
using namespace std;

/*
 * Programa que solicita al usuario un número natural y le ha informado acerca 
 * de si dicho número es perfecto o no.
 */ 
int main() {
    // Petición del dato
    cout << "Escriba un número natural: ";
    int n;
    cin >> n;

    while (n <= 0) {
        cout << "El número debe ser entero positivo: ";
        cin >> n;
    }
    // n > 0
    
    // Determinación de si es perfecto
    unsigned suma = 0;
    for (unsigned divisor = 1; divisor <= unsigned(n) / 2; divisor++) {
        if (n % divisor == 0) {
            suma += divisor;
        }
    }
    bool perfecto = suma == unsigned(n);
    
    // Escritura de resultados
    cout << n;
    if (!perfecto) {
        cout << " no";
    }
    cout << " es un número perfecto." << endl;
}
