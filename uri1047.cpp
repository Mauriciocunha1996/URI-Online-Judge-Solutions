#include<bits/stdc++.h>

using namespace std;
int main(){
    int a, b, c, d, minuto, hora;

    cin>>a>>b>>c>>d, hora;

    if(a>c){
        minuto = (a*60+b)-(c*60+d);
        hora = minuto/60;
        minuto = minuto%60;
        cout<<"O JOGO DUROU "<<hora<<" HORA(S) E "<<minuto<<" MINUTO(S)"<<endl;
    }
    if(a<c){
        minuto = (c*60+d)-(a*60+b);
        hora = minuto/60;
        minuto = minuto%60;
        cout<<"O JOGO DUROU "<<hora<<" HORA(S) E "<<minuto<<" MINUTO(S)"<<endl;
        
    }else if(a==c){
        hora = 24;
        if(b>d){
            minuto = 60 - b + d;
        }else if(b<d){
            minuto = d-b;
        }else if(b==d){
            minuto = b-d;
        }
       cout<<"O JOGO DUROU "<<hora<<" HORA(S) E "<<minuto<<" MINUTO(S)"<<endl; 
    }
}