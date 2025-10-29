// Ejercicio 142: Condicional
// Validar si un año es bisiesto.

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
    int y; cout << "Anio: ";
    if(!(cin>>y)) return 0;
    bool b = (y%4==0 && y%100!=0) || (y%400==0);
    cout << (b? "Bisiesto\n":"No bisiesto\n");
    return 0;
}
