// Ejercicio 205: Condicional
// Simular cajero simple: consultar saldo, retirar, depositar, salir.

#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <iomanip>
#include <algorithm>
#include <limits>
using namespace std;

constexpr double PI = acos(-1.0);

int main(){
    double saldo = 1000.0;
    int op;
    do{
        cout << "1)Saldo 2)Retirar 3)Depositar 4)Salir\nOpcion: ";
        if(!(cin>>op)) return 0;
        if(op==1) cout << "Saldo: " << fixed << setprecision(2) << saldo << "\n";
        else if(op==2){ double r; cout<<"Retirar: "; if(!(cin>>r)) return 0; if(r<=saldo){ saldo-=r; cout<<"Retiro ok\n"; } else cout<<"Saldo insuficiente\n"; }
        else if(op==3){ double d; cout<<"Depositar: "; if(!(cin>>d)) return 0; saldo+=d; cout<<"Deposito ok\n"; }
    } while(op!=4);
    return 0;
}
