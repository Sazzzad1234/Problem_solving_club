#include<bits/stdc++.h>
using namespace std;
int main(){
    int N,X;
    cin>>N>>X;
    int A[N];
    int B[N];
    for(int i=0;i<N;i++){
        cin>>A[i];
    }
    for(int i=0;i<N;i++){
        if(A[i] !=X){
            cout<<A[i]<<" ";
        }
    }
}