#include<bits/stdc++.h>

using namespace std;

int main(){
    int valor;
    int resto100, resto50, resto20, resto10, resto5, resto2, resto1;

    cin>>valor;
    
    resto100 = valor / 100;
    resto50 = (valor%100) / 50;
    resto20 = (((valor%100))%50) / 20;
    resto10 = ((((valor%100))%50)%20) / 10;
    resto5 = (((((valor%100))%50)%20)%10)/ 5;
    resto2 = ((((((valor%100))%50)%20)%10)%5) / 2;
    resto1 = (((((((valor%100))%50)%20)%10)%5)%2) / 1;
    
    cout<<valor<<endl;
    cout<<resto100<<" nota(s) de R$ 100,00"<<endl;
    cout<<resto50<<" nota(s) de R$ 50,00"<<endl;
    cout<<resto20<<" nota(s) de R$ 20,00"<<endl;
    cout<<resto10<<" nota(s) de R$ 10,00"<<endl;
    cout<<resto5<<" nota(s) de R$ 5,00"<<endl;
    cout<<resto2<<" nota(s) de R$ 2,00"<<endl;
    cout<<resto1<<" nota(s) de R$ 1,00"<<endl;

    return 0;
}