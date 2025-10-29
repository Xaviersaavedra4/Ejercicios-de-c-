// Ejercicio 001: Area de un circulo
// Pedir radio y calcular area.

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
    double r;
    cout << "Radio: ";
    if(!(cin>>r)) return 0;
    cout << fixed << setprecision(6) << (PI * r * r) << "\n";
    return 0;
}
