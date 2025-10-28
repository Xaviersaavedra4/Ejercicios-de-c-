// Ejercicio 469: Funciones y Arrays
// Sumar elementos de un vector.

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
    vector<long long> v(n); for(int i=0;i<n;i++) cin>>v[i];
    long long s=0; for(long long x: v) s+=x;
    cout<<s<<"\n"; return 0;
}
