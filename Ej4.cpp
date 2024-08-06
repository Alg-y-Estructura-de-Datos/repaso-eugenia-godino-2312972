#include <iostream>
#include <math.h>
using namespace std;

int sumar(int a, int b)
{
    int c = a + b;
    return c;
}

int areaCirc(int r)
{
    return M_PI * r * r;
}

int potencia(int t, int v)
{
    return pow(t, v);
}

int main()
{
    int opcion;
    do
    {
        cout << "Menu de opciones" << endl;
        cout << "1. Sumar enteros" << endl;
        cout << "2. Calcular area de un circulo" << endl;
        cout << "3. Calcular potencia" << endl;
        cout << "4. Salir" << endl;
        cin >> opcion;
        switch (opcion)
        {
        case 1:
            int x, y;
            cout << "Ingrese dos numeros: " << endl;
            cin >> x >> y;
            cout << "La suma de ambos es: " << sumar(x, y) << endl;
            break;
        case 2:
            int a;
            cout << "Ingrese radio: " << endl;
            cin >> a;
            cout << "El area del circulo es: " << areaCirc(a) << endl;
            break;
        case 3:
            int t, v;
            cout << "Ingrese numero: ";
            cin >> t;
            cout << "elevado a ";
            cin >> v;
            cout << "El resultado es: " << potencia(t, v) << endl;
            break;
        case 4:
            cout<<"Saliendo..."<<endl;
            break;
        default:
            cout<<"Opcion invalida"<<endl;
            break;
        }
    } while (opcion != 4);
    return 0;
}