#include<bits/stdc++.h>

using namespace std;

int main(){
    int N, contagem = 1;

    cin>>N;

    while(contagem <=10){
        cout<<contagem<<" x "<<N<<" = "<<N*contagem<<endl;
        contagem++;
    }

}