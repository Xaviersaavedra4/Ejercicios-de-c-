// Ejercicio 004: Nombre y edad
// Pedir nombre y edad y mostrarlos.

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
    string nombre;
    int edad;
    cout << "Nombre: ";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    getline(cin, nombre);
    cout << "Edad: ";
    if(!(cin>>edad)) return 0;
    cout << nombre << ", " << edad << "\n";
    return 0;
}
