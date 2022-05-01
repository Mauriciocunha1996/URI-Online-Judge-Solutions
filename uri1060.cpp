#include<bits/stdc++.h>

using namespace std;

int main(){
    double vetor[6];
    int contagem = 0;
    for(int i = 0; i < 6; i++){
      cin>>vetor[i];
    }
    for(int i = 0; i < 6; i++){
      if(vetor[i]>0){
                contagem++;
      }
    }
     cout<<contagem<<" valores positivos"<<endl;
}