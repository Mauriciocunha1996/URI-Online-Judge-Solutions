#include<bits/stdc++.h>

using namespace std;

int main(){
    int x, contagem = 0;

    cin>>x;

    for(int i = x; i < x+13; i++){
      if(i%2 !=0){
          cout<<i<<endl;
          contagem++;
          if(contagem == 6){
              break;
          }
      }
    }
}
