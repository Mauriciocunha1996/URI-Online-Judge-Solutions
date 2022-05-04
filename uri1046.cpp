#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b, hora = 24;

    cin>>a>>b;

    if(a>b){
        hora = hora - a + b;
        cout<<"O JOGO DUROU "<<hora<<" HORA(S)"<<endl;
    }
    else if(b>a){
        hora = b - a;
         cout<<"O JOGO DUROU "<<hora<<" HORA(S)"<<endl;
    }
    else if(a==b){
         cout<<"O JOGO DUROU "<<hora<<" HORA(S)"<<endl;
    }
}