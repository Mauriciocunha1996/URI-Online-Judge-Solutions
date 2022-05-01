#include<bits/stdc++.h>
using namespace std;

int main(){
    double x;

    cin>>x;

    if(0.0<=x && x<=25.0){
        cout<<"Intervalo [0,25]"<<endl;
    }
    else if(25.0<x && x<=50.0){
        cout<<"Intervalo (25,50]"<<endl;
    }
    else if(50.0<x && x<=75.0){
        cout<<"Intervalo (50,75]"<<endl;
    }
    else if(75.0<x && x<=100.0){
        cout<<"Intervalo (75,100]"<<endl;
    }
    else{
        cout<<"Fora de intervalo"<<endl;
    }
    return 0;
}