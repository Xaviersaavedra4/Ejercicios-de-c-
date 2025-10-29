// Ejercicio 143: Condicional
// Comparar tres numeros y mostrar el mayor.

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
    double a,b,c; cout<<"Tres numeros: ";
    if(!(cin>>a>>b>>c)) return 0;
    cout << max(a, max(b,c)) << "\n";
    return 0;
}
