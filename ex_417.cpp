// Ejercicio 417: Funciones y Arrays
// Funcion que retorna el mayor de un vector de doubles.

#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <iomanip>
#include <algorithm>
#include <limits>
using namespace std;

constexpr double PI = acos(-1.0);

double mayor(const vector<double>& v){
    if(v.empty()) return 0;
    double m = v[0];
    for(double x: v) if(x>m) m=x;
    return m;
}
int main(){
    int n; cout<<"n: "; if(!(cin>>n)) return 0;
    vector<double> v(n); for(int i=0;i<n;i++) cin>>v[i];
    cout<<mayor(v)<<"\n"; return 0;
}
