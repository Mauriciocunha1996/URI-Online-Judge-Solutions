#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, cont = 0;
    

    cin>>n;
    double x, y, z, soma;
    while(cont < n){
        cin>>x>>y>>z;
        soma = ((x*2.0) + (y*3.0) + (z*5.0))/10.0;
        cont++;
        printf("%.1f\n", soma);

    }
    
} 