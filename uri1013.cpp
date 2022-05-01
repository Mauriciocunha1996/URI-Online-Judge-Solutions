#include<iostream>

using namespace std;

int main(){
    int a, b, c;
    int formulaAB, formulaFinal;

    cin>>a>>b>>c;

    formulaAB = (a + b + abs(a-b))/2;
    formulaFinal = (formulaAB + c + abs(formulaAB - c)) / 2;

    cout << formulaFinal << " eh o maior" << endl;


    return 0;
}