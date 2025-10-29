// Ejercicio 002: Celsius a Fahrenheit
// Leer Celsius y convertir a Fahrenheit.

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
    double c; cout<<"Celsius: ";
    if(!(cin>>c)) return 0;
    cout << fixed << setprecision(6) << (c*9.0/5.0 + 32.0) << "\n";
    return 0;
}
