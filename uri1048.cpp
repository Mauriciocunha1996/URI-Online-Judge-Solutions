#include<bits/stdc++.h>

using namespace std;

int main(){
    float s, r,a;

    cin>>s;

    if(s>0 && s<=400.0){
        a = s * 0.15 + s;
        r = s * 0.15;
        cout<<"Novo salario: "<<fixed<<setprecision(2)<<a<<endl;
        cout<<"Reajuste ganho: "<<fixed<<setprecision(2)<<r<<endl;
        cout<<"Em percentual: "<<fixed<<setprecision(0)<<15<<" %"<<endl;
    }
    else if(s>=400.01 && s<=800.0){
        a = s * 0.12 + s;
        r = s * 0.12;
        cout<<"Novo salario: "<<fixed<<setprecision(2)<<a<<endl;
        cout<<"Reajuste ganho: "<<fixed<<setprecision(2)<<r<<endl;
        cout<<"Em percentual: "<<fixed<<setprecision(0)<<12<<" %"<<endl;
    }
     else if(s>=800.01 && s<=1200.0){
        a = s * 0.10 + s;
        r = s * 0.10;
        cout<<"Novo salario: "<<fixed<<setprecision(2)<<a<<endl;
        cout<<"Reajuste ganho: "<<fixed<<setprecision(2)<<r<<endl;
        cout<<"Em percentual: "<<fixed<<setprecision(0)<<10<<" %"<<endl;
    }
     else if(s>=1200.01 && s<=2000.0){
        a = s * 0.07 + s;
        r = s * 0.07;
        cout<<"Novo salario: "<<fixed<<setprecision(2)<<a<<endl;
        cout<<"Reajuste ganho: "<<fixed<<setprecision(2)<<r<<endl;
        cout<<"Em percentual: "<<fixed<<setprecision(0)<<7<<" %"<<endl;
    }
     else if(s>=1200.01 && s<=2000.0){
        a = s * 0.07 + s;
        r = s * 0.07;
        cout<<"Novo salario: "<<fixed<<setprecision(2)<<a<<endl;
        cout<<"Reajuste ganho: "<<fixed<<setprecision(2)<<r<<endl;
        cout<<"Em percentual: "<<fixed<<setprecision(0)<<7<<" %"<<endl;
    }
     else if(s>2000.0){
        a = s * 0.04 + s;
        r = s * 0.04;
        cout<<"Novo salario: "<<fixed<<setprecision(2)<<a<<endl;
        cout<<"Reajuste ganho: "<<fixed<<setprecision(2)<<r<<endl;
        cout<<"Em percentual: "<<fixed<<setprecision(0)<<4<<" %"<<endl;
    }
}
    