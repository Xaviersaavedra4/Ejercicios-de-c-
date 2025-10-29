// Ejercicio 297: Bucle
// Imprimir primeros n terminos de Fibonacci.

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
    long long a=0,b=1;
    for(int i=0;i<n;i++){ cout<<a; if(i+1<n) cout<<" "; long long t=a+b; a=b; b=t; }
    cout<<"\n"; return 0;
}
