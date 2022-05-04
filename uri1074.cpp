#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;

    cin>>n;

    for(int i = 0; i < n; i++){
        cin>>i;
        if(i>0 && i%2==0){
            cout<<"EVEN POSITIVE"<<endl;
        }else if(i<0 && i%2==0){
            cout<<"EVEN NEGATIVE"<<endl;
        }else if(i>0 && i%2!=0){
            cout<<"ODD POSITIVE"<<endl;
        }else if(i<0 && i%2!=0){
            cout<<"ODD NEGATIVE"<<endl;
        }else if(i==0){
            cout<<"NULL"<<endl;
        }
    }
}