#include<bits/stdc++.h>
using namespace std;
int main(){
    char y;
    string S;
    cin>>S;
    string S2="abcdefghijklmnopqrstuvwxyz";
    sort(S.begin(),S.end());
   auto newS= unique(S.begin(),S.end());
   S.erase(newS,S.end());
    int size=S.length();
    bool X= true;
    for(int i=0;i<size;i++){
        if(S[i]!=S2[i]){
            X= false;
             y=S2[i];
            break;
        }
    }
    if(size==26 && X==true){
        cout<<"None";
    }
    else if(size<26 && X==true){
        cout<<S2[size];
    }
    else {
        cout<<y;
    }
}