#include <iostream>
#include <exception>
using namespace std;

#include <exception>
class Calculadora {
    private:
    int A;
    int B;
    public:
    Calculadora (){}
    Calculadora (int _a, int _b):A(_a), B(_b){}
    void setA (int _a){
        A = _a;
    }
    void setB (int _b){
        B = _b;
    }
    int getA (){
        return A;
    }
    int getB (){
        return B;
    }
    int suma (){
        return A + B;
    }
    int resta (){
        return A - B;
    }
    int multiplicacion (){
        return A * B;
    }
    int division (){
        try {
            float resultado = A / B;
            return resultado;
        }
        catch (const runtime_error& e){
            cout << "Excepcion atrapada: "<<e.what()<<endl;
        }
    }
};

int main (){
    Calculadora c;
    int x, y;
    cout<<"Ingrese dos numeros: "<<endl;
    cin>>x>>y;
    c.setA(x);
    c.setB(y);
    cout<<"Suma: "<<c.suma()<<endl;
    cout<<"Resta: "<<c.resta()<<endl;
    cout<<"Multiplicacion: "<<c.multiplicacion()<<endl;
    cout<<"Division: "<<c.division()<<endl;
}
