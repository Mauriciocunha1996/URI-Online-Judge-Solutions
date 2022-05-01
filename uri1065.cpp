#include<bits/stdc++.h>

using namespace std;

int main(){
    int vetor[5], contagem;

    for(int i = 0; i < 5; i++){
        cin>>vetor[i];
    }

    for(int i = 0; i < 5 ; i++){
        if(vetor[i]%2==0){
            contagem++;
        }
    }
    cout<<contagem<<" valores pares"<<endl;
}