#include<bits/stdc++.h>
using namespace std;

int main(){
    int x, y;

    cin>>x>>y;
    if(x>=y){
        if(x%y==0){
        cout<<"Sao Multiplos"<<endl;
        }
        else{
            cout<<"Nao sao Multiplos"<<endl;
        }

    }else{
        if(y%x==0){
        cout<<"Sao Multiplos"<<endl;
        }
        else{
            cout<<"Nao sao Multiplos"<<endl;
        }
    }
    
}