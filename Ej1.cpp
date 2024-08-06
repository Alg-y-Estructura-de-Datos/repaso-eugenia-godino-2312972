#include <iostream>
using namespace std;

void intercambiarJugos(double &a, double &b) {
    double c = a;
    a = b;
    b = c;
}

int main() {
    double jugoNaranja, jugoManzana;

    cout << "Ingrese la cantidad de jugo de naranja: ";
    cin >> jugoNaranja;
    cout << "Ingrese la cantidad de jugo de manzana: ";
    cin >> jugoManzana;

    cout << "Antes del intercambio: "<<endl;
    cout << "Jugo de naranja: " << jugoNaranja << endl;
    cout << "Jugo de manzana: " << jugoManzana << endl;

    intercambiarJugos(jugoNaranja, jugoManzana);

    cout << "Después del intercambio:"<<endl;
    cout << "Jugo de naranja: " << jugoNaranja << endl;
    cout << "Jugo de manzana: " << jugoManzana << endl;

    return 0;
}