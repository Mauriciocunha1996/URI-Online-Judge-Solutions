#include<bits/stdc++.h>
using namespace std;

int main(){

    float x;
    int resto, resto1,y, inteiro;

    cin>>x;
    
    y = int(x);
    cout<<"NOTAS:"<<endl;
    resto = y/100;
    cout<<resto<<" nota(s) de R$ 100.00"<<endl;
    resto = (y%100)/50;
    cout<<resto<<" nota(s) de R$ 50.00"<<endl;
    resto = ((y%100)%50)/ 20;
    cout<<resto<<" nota(s) de R$ 20.00"<<endl;
    resto = (((y%100)%50)% 20)/10;
    cout<<resto<<" nota(s) de R$ 10.00"<<endl;
    resto = ((((y%100)%50)% 20)%10)/5;
    cout<<resto<<" nota(s) de R$ 5.00"<<endl;
    resto = (((((y%100)%50)% 20)%10)%5)/2;
    cout<<resto<<" nota(s) de R$ 2.00"<<endl;
    
     cout<<"MOEDAS:"<<endl;
     resto = ((((((y%100)%50)% 20)%10)%5)%2)/1;
     cout<<resto<<" moeda(s) de R$ 1.00"<<endl;
     
     inteiro = x;
     x = x * 100;
     resto1 = x;
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

     return 0;
}