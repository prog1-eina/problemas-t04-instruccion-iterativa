﻿/*
 * Autores: Javier Martínez y Miguel Ángel Latre
 * Última revisión: 5-10-2020
 * Resumen: Programa interactivo que indica si un número introducido por el
 *          usuario es o no perfecto.
 *          4.ª clase de problemas de Programación 1
 */
#include <iostream>
using namespace std;

/*
 * Devuelve true si y solo si «n» es un número perfecto.
 */
bool esPerfecto(unsigned int n) {
    unsigned int suma = 0;
    for (unsigned int divisor = 1; divisor <= n/2; divisor++) {
        if (n % divisor == 0) {
            suma += divisor;
        }
    }
    return suma == n;
}

/*
 * Pide reiteradamente al usuario un número entero positivo y devuelve el primer
 * número entero positivo introducido por el usuario.
 */ 
unsigned int pedirNumeroNatural() {
    cout << "Escriba un número natural: ";
    int n;
    cin >> n;

    while (n <= 0) {
        cout << "El número debe ser entero positivo: ";
        cin >> n;
    }
    // n > 0
    return n;
}

/*
 * Programa que solicita al usuario un número natural y le ha informado acerca 
 * de si dicho número es perfecto o no.
 */ 
int main() {
    unsigned int n = pedirNumeroNatural();
    
    cout << n;
    if (!esPerfecto(n)) {
        cout << " no";
    }
    cout << " es un número perfecto." << endl;
    
    return 0;
}
