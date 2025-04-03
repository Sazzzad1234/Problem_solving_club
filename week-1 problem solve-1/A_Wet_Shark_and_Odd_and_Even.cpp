#include<bits/stdc++.h>
using namespace std;
int main(){
   int min_odd =INT_MAX;
    int n;
    cin>>n;
    int a[n];
    long long int sum=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
        if(a[i]%2==1){
            min_odd =min(a[i],min_odd);
        }
    }
    if(n==0){
        cout<<" "<<endl;
    }
    if(sum%2==0){
        cout<<sum;
    }
    else{
        cout<<sum-min_odd;
    }
}