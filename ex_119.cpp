// Ejercicio 119: Operacion simple
// Leer dos numeros y mostrar suma, resta, prod y division (si es posible).

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
    double a,b;
    cout << "Ingrese dos numeros: ";
    if(!(cin>>a>>b)) return 0;
    cout << "Suma: " << a+b << "\n";
    cout << "Resta: " << a-b << "\n";
    cout << "Producto: " << a*b << "\n";
    if(b!=0) cout << "Division: " << a/b << "\n";
    else cout << "Division: indefinida\n";
    return 0;
}
