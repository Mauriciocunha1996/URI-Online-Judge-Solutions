#include<bits/stdc++.h>

using namespace std;

int main(){
    int x, y;

    cin>>x>>y;

    switch (x){
        
    case 1:
        cout<< fixed << setprecision(2);
        cout<<"Total: R$ "<< y * 4.00 << endl;
        break;

    case 2:
        cout<< fixed << setprecision(2);
        cout<<"Total: R$ "<< y * 4.50 << endl;
        break;
    
    case 3:
        cout<< fixed << setprecision(2);
        cout<<"Total: R$ "<< y * 5.00 << endl;
        break;
    
    case 4:
        cout<< fixed << setprecision(2);
        cout<<"Total: R$ "<< y * 2.00 << endl;
        break;
    
    case 5:
        cout<< fixed << setprecision(2);
        cout<<"Total: R$ "<< y * 1.50 << endl;
        break;
    }
    return 0;
}