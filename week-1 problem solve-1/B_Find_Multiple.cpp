#include<bits/stdc++.h>
using namespace std;
int main(){
    int A,B,C;
    cin>>A>>B>>C;
    bool x= false;
    int y=0;
    for(int i=A;i<=B;i++){
        if(i%C==0){
            x = true;
            y=i;
            break;   
        }
    }
    if(x==true){
    
        cout<<y<<endl;
    }
    else{
        cout<<-1<<endl;
    }
}