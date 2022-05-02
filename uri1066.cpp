#include<bits/stdc++.h>

using namespace std;

int main(){
    int vetor[5], p=0, impar=0, pos = 0, neg = 0;

    for(int i = 0; i < 5; i++){
        cin>>vetor[i];
    }

    for(int i = 0; i < 5; i++){
        if(vetor[i]%2==0){
            p++;     
        }
        if(vetor[i]%2 != 0){
               impar++; 
        }
        if(vetor[i]>0){
            pos++;
        }
        if(vetor[i]<0){
            neg++;
        }
    }
    cout<<p<<" valor(es) par(es)"<<endl;
    cout<<impar<<" valor(es) impar(es)"<<endl;
    cout<<pos<<" valor(es) positivo(s)"<<endl;
    cout<<neg<<" valor(es) negativo(s)"<<endl;
}
