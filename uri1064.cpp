#include<bits/stdc++.h>

using namespace std;

int main(){
    int vetor[6], media, cont;

    for(int i = 0; i < 6; i++){
        cin>>vetor[i];
    }
    for(int i = 0; i < 6; i++){
        if(vetor[i]>0){
            media = vetor[i];
            cont++;
        }
        cout<<cont<<" valores positivos"<<endl;
        cout<<media;
    }
}