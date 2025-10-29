// Ejercicio 003: Fahrenheit a Celsius
// Leer Fahrenheit y convertir a Celsius.

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
    double f; cout<<"Fahrenheit: ";
    if(!(cin>>f)) return 0;
    cout << fixed << setprecision(6) << ((f-32.0)*5.0/9.0) << "\n";
    return 0;
}
