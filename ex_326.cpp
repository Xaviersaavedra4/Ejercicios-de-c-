// Ejercicio 326: Bucle
// Generar tabla de multiplicar hasta 12.

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
    int x; cout<<"Numero: "; if(!(cin>>x)) return 0;
    for(int i=1;i<=12;i++) cout<<x<<" x "<<i<<" = "<<x*i<<"\n";
    return 0;
}
