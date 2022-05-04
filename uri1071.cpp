#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, ip;
    vector<int> v;
    cin>>a>>b;
    
    if(a>=b){
      for(int i = a-1; i > b; i--){
          
        if(i%2 != 0){
             v.push_back(i); 
        }
      }
    cout<<accumulate(v.begin(), v.end(), 0)<<endl;  
    }
    else if(b>a){
      for(int i = a; i < b; i++){
          
        if(i%2 != 0){
             v.push_back(i); 
        }
      }
    cout<<accumulate(v.begin(), v.end(), 0)<<endl;  
    }
  
    
}