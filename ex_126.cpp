// Ejercicio 126: Condicional
// Determinar si un numero es par o impar.

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
    long n; cout << "Numero: ";
    if(!(cin>>n)) return 0;
    cout << (n%2==0 ? "Par\n" : "Impar\n");
    return 0;
}
