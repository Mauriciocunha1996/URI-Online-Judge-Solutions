#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, cont = 0;
    

    cin>>n;
    double x, y, z, soma;
    while(cont < 3){
        cin>>x,y,z;
        soma = ((y*2.0) + (y*3.0) + (z*5.0))/10.0;
        printf("%1.f", soma);
        cont++;

    }