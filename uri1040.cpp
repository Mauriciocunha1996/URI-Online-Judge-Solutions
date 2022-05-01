#include<bits/stdc++.h>
//uri1040
using namespace std;

int main(){

    double n1 , n2, n3, n4, media;

    cin>> n1 >> n2 >> n3 >>n4;

    media = ((n1 * 2) + (n2 * 3) + (n3 * 4) + (n4 * 1))/10;
    cout.precision(1);
    cout << "Media: " << fixed << media << endl;

    if(media >= 7){
        cout<<"Aluno aprovado."<<endl;

    }else if(media >= 5 && media < 7){
        cout << "Aluno em exame." << endl;
        cin>>n1;
        cout << "Nota do exame: " << fixed << n1 <<endl;
        media= (media + n1)/2;

        if(media >= 5){
            cout<<"Aluno aprovado."<<endl;
        }else {
            cout<<"Aluno reprovado."<<endl;
            
        }
        cout << "Media final: " << fixed << media << endl;
    }else{
        cout << "Aluno reprovado."<<endl;
    }

    return 0;

}