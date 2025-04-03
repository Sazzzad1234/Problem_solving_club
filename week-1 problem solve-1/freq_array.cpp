#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int freq[101]={0};
    for(int i=0;i<n;i++){
        freq[arr[i]]++;
    }
    for(int i=0;i<101;i++){
        if(freq[i]>0)
        cout<<freq[i]<<endl;
    }
}