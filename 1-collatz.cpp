/*
 * Autores: Miguel Ángel Latre
 * Última revisión: 5-10-2020
 * Resumen: Programa que escribe en la pantalla las secuencias de Collatz que se
 *          generan cuando se inician en 13 y 6.
 *          4.ª clase de problemas de Programación 1
 */
#include <iostream>
using namespace std;

/*
 * Escribe en la pantalla la secuencia de Collatz que comienza en «n».
 */
void escribirSecuenciaCollatz(unsigned int n) {
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

/*
 * Programa que escribe en la pantalla las secuencias de Collatz que se generan 
 * a partir de 13 y de 6.
 */
int main() {
    escribirSecuenciaCollatz(13);
    escribirSecuenciaCollatz(6);
    return 0;
}
