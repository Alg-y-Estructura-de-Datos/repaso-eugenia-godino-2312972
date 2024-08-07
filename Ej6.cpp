#include <iostream>
#include <vector>
#include <string>
using namespace std;

void menu (){
    cout << "1. Agregar contacto"<<endl;
    cout << "2. Mostrar contactos"<<endl;
    cout << "3. Salir"<<endl;
    cout << "Elija una opción: ";
}

void agregarContacto(vector<string> &contactos, const string &nombre, const string &telefono) {
    string contacto = nombre + ": " + telefono;
    contactos.push_back(contacto);
}

void mostrarContactos(const vector<string> &contactos) {
    cout << "Lista de Contactos:"<<endl;
    for (size_t i = 0; i < contactos.size(); ++i) {
        cout << i + 1 << ". " << contactos[i]<<endl;
    }
}

int main() {
    vector<string> contactos;
    string nombre, telefono;
    int opcion;

    do {
        menu ();
        cin >> opcion;
        cin.ignore();  

        switch (opcion) {
            case 1:
                cout << "Ingrese el nombre del contacto: ";
                getline(cin, nombre);
                cout << "Ingrese el número de teléfono: ";
                getline(cin, telefono);
                agregarContacto(contactos, nombre, telefono);
                break;
            case 2:
                mostrarContactos(contactos);
                break;
            case 3:
                cout << "Saliendo...";
                break;
            default:
                break;
        }
    } while (opcion != 3);

    return 0;
}