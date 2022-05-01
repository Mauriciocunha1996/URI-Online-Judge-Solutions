#include<bits/stdc++.h>
using namespace std;

int main(){
    double A, B, C, a,b, c;

    cin>>A>>B>>C;
    
    a = max((max(A,B)), C);
    b = min((min(A,B)), C);
    
    if(A>b && A<a){
        c = A;
    }
    else if(B>b && B<a){
        c = B;
    }
    else if(C>b && C<a){
        c = C;
    }
    else if(A==B || A==C){
        c = A;
    }
    else if(B==C || B== A){
        c=B;
    }
    else if(C==B || C==A){
        c  = C;
    }

    if(a>=b+c){
        cout<<"NAO FORMA TRIANGULO"<<endl;
        
    }else{
        if(pow(a,2)== pow(b,2)+pow(c,2)){
        cout<<"TRIANGULO RETANGULO"<<endl;
        }if(pow(a,2) > pow(b,2)+pow(c,2)){
            cout<<"TRIANGULO OBTUSANGULO"<<endl;
        }if(pow(a,2) < pow(b,2)+pow(c,2)){
            cout<<"TRIANGULO ACUTANGULO"<<endl;
        }if(a==b && b==c){
            cout<<"TRIANGULO EQUILATERO"<<endl;
        }if(a==b && b !=c){
            cout<<"TRIANGULO ISOSCELES"<<endl;
        }else if(b==c && b!=a){
            cout<<"TRIANGULO ISOSCELES"<<endl;
        }else if(c==a && c !=b){
            cout<<"TRIANGULO ISOSCELES"<<endl;
        } else if(c==b && c !=a){
            cout<<"TRIANGULO ISOSCELES"<<endl;
        }   
    }
    return 0;
}

