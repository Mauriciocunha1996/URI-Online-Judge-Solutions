#include<bits/stdc++.h>

using namespace std;

int main(){
    int horasGastas, kmPorHora, kmPorLitro = 12;
    double resultado;

    cin>>horasGastas;
    cin>>kmPorHora;

    resultado = (horasGastas * kmPorHora ) / (double) kmPorLitro;

    cout<< fixed << setprecision(3);
    cout<< resultado << endl;



    return 0;
}