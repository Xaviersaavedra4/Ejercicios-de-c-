// Ejercicio 295: Bucle
// Calcular factorial (iterativo).

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
    unsigned long long f=1;
    for(int i=1;i<=n;i++) f*=i;
    cout<<f<<"\n";
    return 0;
}
