#include<bits/stdc++.h>
using namespace std;

int main(){
    int x, ano, meses, dias;

    cin>>x;

    ano = x / 365;
    cout<<ano<<" ano(s)"<<endl;
    meses = (x%365)/30;
    cout<<meses<<" mes(es)"<<endl;
    dias = ((x%365)%30);
    cout<<dias<<" dia(s)"<<endl;

    return 0;
}