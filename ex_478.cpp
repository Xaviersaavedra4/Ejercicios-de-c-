// Ejercicio 478: Funciones y Arrays
// Buscar un elemento en un vector (lineal).

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
    int n,x; cout<<"n: "; if(!(cin>>n)) return 0;
    vector<int> v(n); for(int i=0;i<n;i++) cin>>v[i];
    cout<<"Buscar valor: "; cin>>x;
    int pos=-1;
    for(int i=0;i<n;i++) if(v[i]==x){ pos=i; break; }
    if(pos==-1) cout<<"No encontrado\n"; else cout<<"Encontrado en indice "<<pos<<"\n";
    return 0;
}
