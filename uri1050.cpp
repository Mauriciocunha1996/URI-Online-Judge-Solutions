#include<bits/stdc++.h>

using namespace std;
int main(){
    map<int, string>ddd = {{11,"Sao Paulo",}, 
                            {61,"Brasilia",}, 
                            {71,"Salvador",},
                            {21,"Rio de Janeiro", },
                            {32,"Juiz de Fora",},
                            {19,"Campinas",},
                            {27,"Vitoria",},
                            {31,"Belo Horizonte"}};
    int i;
    
    cin>>i;
    
    if(i!=61 && i!=11 && i!=71 && i!=21 && i!=32 && i!=19 && i!=27 && i!=31){
            cout<<"DDD nao cadastrado"<<endl;
    }
    else{
            cout<<ddd[i]<<endl;
    }
    

}