#include <iostream>
using namespace std;

void marcarAsiento (bool *asiento){
    *asiento = true;  
}

int main (){
    const int cant = 10;
    bool asientos [cant] = {false};
    int num_asiento;
    cout << "Estado inicial asientos del teatro: ";
    for (int i = 0; i < cant ; i++){
        cout << "Asiento "<<i+1<<": "<<(asientos[i] ? "Reservado":"Libre")<<endl;
    }
    cout<<"Ingrese asiento que desea reservar (1 - 10): ";
    cin >> num_asiento;
    if (num_asiento < 1 || num_asiento > cant){
        cout << "Numero asiento invalido" <<endl;
    }
    marcarAsiento (&asientos [num_asiento-1]);
    cout<<"Estados de los asientos despues de la reserva: "<<endl;
    for (int i = 0; i < cant; i++){
        cout<<"Asiento "<<i+1<<": "<<(asientos[i] ? "Reservado" : "Libre")<<endl;
    }
    return 0;
}
