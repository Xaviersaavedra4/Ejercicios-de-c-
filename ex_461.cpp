// Ejercicio 461: Funciones y Arrays
// Invertir elementos de un vector.

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
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    reverse(v.begin(), v.end());
    for(int x: v) cout<<x<<" ";
    cout<<"\n"; return 0;
}
