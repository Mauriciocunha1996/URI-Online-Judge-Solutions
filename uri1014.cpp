#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    int x; //x representa a distância percorrida 
    double y, z; //y o total de combustivel gasto e z representa meu total de km/l

    cin>>x;
    cin>> fixed >> setprecision(1)>> y;

    z = (double)x/y;

    cout<< fixed << setprecision(3) << z << " km/l" << endl;

    return 0;
}