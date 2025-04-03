#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        vector<int>h(n);
        for (int i =0;i<n;i++){
            cin>>h[i];
        }
    sort(h.begin(),h.end());
    int count =0,count1=0;
        for(int i=0;i<n;i++){
            if(h[i]==1){
                count++;
            }
        }
    for(int i=0;i<n;i++){
        if(h[i]!=1){
            count1++;
        }
    }
    int x;
    if(count%2==0){
        x=count/2;
    }
    else{
        x=(count/2)+1;
    }
    cout<<(count1+x)<<endl;
    }
    return 0;
}