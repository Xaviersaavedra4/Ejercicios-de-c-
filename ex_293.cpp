// Ejercicio 293: Bucle
// Sumar los primeros n numeros naturales.

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
    long n; cout<<"n: "; if(!(cin>>n)) return 0;
    long long s=0;
    for(long i=1;i<=n;i++) s+=i;
    cout<<s<<"\n"; return 0;
}
