#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    int numeroDoFuncionario, horasTrabalhadas;
    float valorPorHoras, salario;

    cin>>numeroDoFuncionario;
    cin>>horasTrabalhadas;
    cin>>valorPorHoras;

    salario = horasTrabalhadas * valorPorHoras;
    
    cout<<"NUMBER = "<<numeroDoFuncionario<<endl;
    cout<< fixed << setprecision(2) << endl;
    cout<<"SALARY = U$ "<<salario<< endl;

    return 0;
}