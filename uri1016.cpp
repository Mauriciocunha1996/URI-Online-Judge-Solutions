#include<bits/stdc++.h>
using namespace std;

int main(){
    int x = 60, y = 90, recebe, inteiro;
    double tempo;

    cin>>recebe;
    
    tempo = recebe/(double)(y-x);
    inteiro = tempo * 60;

    cout<< inteiro << " minutos"<< endl;

}