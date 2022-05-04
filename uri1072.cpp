#include<bits/stdc++.h>

using namespace std;

int main(){
    int cont1 = 0, cont2 = 0, n;
    
    cin>>n;
    
    int vetor[n];

    for(int i = 0; i < n; i++){
        cin>>vetor[i];
        if(vetor[i]>=10 && vetor[i]<=20){
            cont1++;
        }else if(vetor[i]<10 || vetor[i]>20){
            cont2++;
        }
    }
    cout<<cont1<<" in"<<endl;
    cout<<cont2<<" out"<<endl;
}