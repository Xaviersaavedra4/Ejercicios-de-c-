// Ejercicio 480: Funciones y Arrays
// Funcion que calcula promedio de vector de doubles.

#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <iomanip>
#include <algorithm>
#include <limits>
using namespace std;

constexpr double PI = acos(-1.0);

double promedio(const vector<double>& v){
    if(v.empty()) return 0;
    double s=0; for(double x: v) s+=x; return s/v.size();
}
int main(){
    int n; cout<<"n: "; if(!(cin>>n)) return 0;
    vector<double> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    cout<<promedio(v)<<"\n"; return 0;
}
