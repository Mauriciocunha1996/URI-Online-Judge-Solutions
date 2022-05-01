#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    float x1, y1, x2, y2, distancia;

    cin>>x1 >> y1;
    cin>> x2 >> y2;

    distancia = (((x2-x1) * (x2-x1)) + ((y2-x1) * (y2-y1))) * 0.5 * 0.5;

    cout<< fixed << setprecision(4) << distancia << endl;

    return 0;
}
