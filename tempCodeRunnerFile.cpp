#include<bits/stdc++.h>

using namespace std;

int main(){
    int x, hora, minuto, segundo;

    cin>>x;

    hora = x / 3600;
    cout<<hora<<":";
    minuto = (x%3600)/60;
    cout<<minuto<<":";
    segundo = ((x%3600)%60);
    cout<<segundo<<endl;

}