#include<iostream>
#include<iomanip>
using namespace std;

int main(){
     int codigo1, codigo2, quantidade1, quantidade2;
     double valor1, valor2, soma;
    
     cin>>codigo1>> quantidade1 >> fixed >> setprecision(2)>> valor1;
     cin>>codigo2 >> quantidade2 >> fixed >> setprecision(2) >> valor2;

     soma = (quantidade1 * valor1) + (quantidade2 * valor2);
     cout<< fixed << setprecision(2) << "VALOR A PAGAR: R$ "<< soma << endl;

     return 0;
}