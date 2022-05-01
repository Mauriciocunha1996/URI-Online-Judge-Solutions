#include<bits/stdc++.h>
using namespace std;

int main(){
    double A, B, C, x;
    
    cin>>A>>B>>C;
    cout.precision(1);
    if(A+B>C && A+C>B && B+C>A){
        x = A+B+C;
        cout<<"Perimetro = "<<fixed<<x<<endl;
    }
    else{
        x = ((A+B)*C)/2.0;
        cout<<"Area = "<<fixed<<x<<endl;
    }
}