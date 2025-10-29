// Ejercicio 144: Condicional
// Uso de switch: mostrar dia de la semana por numero 1-7.

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
    int d; cout<<"Dia (1-7): ";
    if(!(cin>>d)) return 0;
    switch(d){
        case 1: cout<<"Lunes\n"; break;
        case 2: cout<<"Martes\n"; break;
        case 3: cout<<"Miercoles\n"; break;
        case 4: cout<<"Jueves\n"; break;
        case 5: cout<<"Viernes\n"; break;
        case 6: cout<<"Sabado\n"; break;
        case 7: cout<<"Domingo\n"; break;
        default: cout<<"Numero invalido\n";
    }
    return 0;
}
