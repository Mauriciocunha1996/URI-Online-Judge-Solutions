#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;

    cin>>n;
    
    int v[n];

    for(int i = 0; i < n; i++){
        cin>>v[i];
        if(v[i]>0 && v[i] % 2 == 0){
            cout<<"EVEN POSITIVE"<<endl;
        }else if(v[i]<0 && v[i] % 2 == 0){
            cout<<"EVEN NEGATIVE"<<endl;
        }else if(v[i]>0 && v[i] % 2 != 0){
            cout<<"ODD POSITIVE"<<endl;
        }else if(v[i] < 0 && v[i] % 2 != 0){
            cout<<"ODD NEGATIVE"<<endl;
        }else if(v[i]==0){
            cout<<"NULL"<<endl;
        }
    }
}