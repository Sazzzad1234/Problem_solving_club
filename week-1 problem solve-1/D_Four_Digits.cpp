#include<bits/stdc++.h>
using namespace std;
int main(){
     int N;
     cin>>N;
     int y=N;
     int length=0;
      if(N==0){
        length=1;
    }
    else{
        while(N>0){
    N=N/10;
    length++;
        }
    }
    if(length<4){
        for(int i=0;i<4-length;i++){
            cout<<0;
        }
    }
    cout<<y;
    
}