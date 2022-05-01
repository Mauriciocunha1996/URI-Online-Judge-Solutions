#include<bits/stdc++.h>

using namespace std;

int main(){
    double A, B, C, delta, raiz1, raiz2, divisor;

    cin>>A>>B>>C;

    delta = pow(B,2) - 4 * A * C;
    divisor = 2.0 * A;
    if(delta < 0){
        cout<<"Impossivel calcular"<<endl;
    }
    else{
        
        if(divisor == 0.0){
            cout<<"Impossivel calcular"<<endl;
        }
        else{
            raiz1 = (-B + sqrt(delta))/divisor;
            raiz2 = (-B - sqrt(delta))/divisor;
            cout<<fixed<<setprecision(5);
            cout<<"R1 = "<<raiz1<<endl;
            cout<<"R2 = "<<raiz2<<endl;
        }
    }

    
    return 0;
}