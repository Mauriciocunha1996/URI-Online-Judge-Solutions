#include<bits/stdc++.h>
using namespace std;

int main(){

    double x;
    int resto, resto1, inteiro;

     while(cin >> x){

        inteiro = x;
        x = x * 100;
        resto1 = x;

        
        cout<<"NOTAS:"<<endl;
        cout<< inteiro / 100 <<" nota(s) de R$ 100.00"<<endl;
        resto = inteiro % 100;
        cout<<resto / 50 <<" nota(s) de R$ 50.00"<<endl;
        resto = resto % 50;
        cout<<resto/20<<" nota(s) de R$ 20.00"<<endl;
        resto = resto % 20;
        cout<<resto / 10 <<" nota(s) de R$ 10.00"<<endl;
        resto = resto % 10;
        cout<<resto / 5<<" nota(s) de R$ 5.00"<<endl;
        resto = resto % 5;
        cout<<resto / 2  <<" nota(s) de R$ 2.00"<<endl;
        
        
        cout<<"MOEDAS:"<<endl;
        resto = resto % 2;
        cout<<resto / 1<<" moeda(s) de R$ 1.00"<<endl;
        resto1 = resto1%100;
        cout<<resto1/50<<" moeda(s) de R$ 0.50"<<endl;
        resto1 = resto1%50;
        cout<<resto1/25<<" moeda(s) de R$ 0.25"<<endl;
        resto1 = resto1% 25;
        cout<<resto1/10<<" moeda(s) de R$ 0.10"<<endl;
        resto1 = resto1%10;
        cout<<resto1/5<<" moeda(s) de R$ 0.05"<<endl;
        resto1 = resto1%5;
        cout<<resto1/1<<" moeda(s) de R$ 0.01"<<endl;
     }

     return 0;
}