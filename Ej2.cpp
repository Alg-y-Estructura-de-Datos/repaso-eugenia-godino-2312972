#include <iostream>
using namespace std;

int factorial (int n){
    int fact;
    if (n < 1){
        fact = 1;
    } else {
        fact = n * factorial (n-1);
    }
    return fact;
}

int main (){
    int a;
    cout << "ingrese un numero: ";
    cin>>a;
    cout << a<<"! = "<<factorial(a)<<endl;
    return 0;                                                                                                                   
}
