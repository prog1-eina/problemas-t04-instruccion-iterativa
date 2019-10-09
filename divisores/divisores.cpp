/*
 * Autores: Javier Martínez y Miguel Ángel Latre
 * Última revisión: 9-10-2019
 * Resumen: Programa interactivo que escribe en la pantalla los divisores de
 *          un número introducido por el usuario.
 *          4.ª clase de problemas de Programación 1
 */
 #include <iostream>
 using namespace std;

/*
 * Programa que solicita al usuario un número positivo y ha escrito en la
 *       pantalla los divisores de dicho número.
 */ 
int main() {
    cout << "Escriba un número entero positivo: ";
    int n;
    cin >> n;
    
    cout << "DIVISORES DE " << n << ":" << endl;
    
    int posibleDivisor = 1;
    while (posibleDivisor <= n / 2) {
        // Se recorren los posibles divisores de n en [1, n/2]
        if (n % posibleDivisor == 0) {
            // Si posibleDivisor realmente divide a n, se escribe en la pantalla
            cout << posibleDivisor << endl;
        }
        // Se incrementa el valor de posibleDivisor para la siguiente iteración
        posibleDivisor++;
    }
    // Se escribe el valor de «n», que es divisor de sí mismo.
    cout << n << endl;
    
    return 0;
}