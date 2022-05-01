#include<bits/stdc++.h>

using namespace std;

int main(){
    int vetor[3], aux[3];
    int n = sizeof(aux) / sizeof(aux[0]);
    cout<<n<<endl;
 
    
    for(int i = 0; i < 3; i++){
        cin>>vetor[i];
    }
    for(int j = 0; j < 3; j++){
        aux[j] = vetor[j];
    }
     //crecente
    sort(aux, aux + n);
    for (int i = 0; i < n; ++i){
        cout << aux[i] <<endl;
    }
    
    cout<<"\n";
    for(int i = 0; i < 3; i++){
        cout<<vetor[i]<<endl;
    }
    

}