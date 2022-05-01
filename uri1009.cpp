#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    string nome;
    double salarioFixo, montanteTotaldeVendas, salarioTotal;

    cin>>nome;
    cout<< fixed << setprecision(2);
    cin>>salarioFixo>>montanteTotaldeVendas;

    salarioTotal = salarioFixo + (montanteTotaldeVendas * 0.15);

    
    cout<<"TOTAL = R$ "<< fixed << setprecision(2) << salarioTotal <<endl;

    return 0;



}