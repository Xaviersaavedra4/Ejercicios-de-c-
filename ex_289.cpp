// Ejercicio 289: Bucle
// Contar hasta n usando while.

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
    int n; cout<<"n: "; if(!(cin>>n)) return 0;
    int i=1;
    while(i<=n){ cout<<i; if(i<n) cout<<" "; i++; }
    cout<<"\n"; return 0;
}
