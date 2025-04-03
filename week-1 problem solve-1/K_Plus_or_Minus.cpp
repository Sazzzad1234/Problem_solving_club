#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    for(int i=0;i<T;i++){
        int a,b,c;
        cin>>a>>b>>c;
        if(a+b == c){
            cout<<"+"<<endl;
        }
        else{
            cout<<"-"<<endl;
        }
    }
}