#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    for(int i=0;i<T;i++){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            int b;
            string b1;
            cin>>b>>b1;
            int count=0,count1=0,sum=0;
            for(int i=0;i<b;i++){
                if(b1[i]=='U'){
                    count++;
                }
                else if(b1[i]=='D'){
                    count1++;
                }
                 sum=count-count1;
            }
            int ans=a[i]-(sum);
            if(ans>9){
                cout<<abs(ans-10)<<" ";      
                  }
                  else if(ans<0){
                    cout<<ans+10<<" ";
                  }
                  else{
                    cout<<ans<<" ";
                  }
            
        }
        cout<<endl;  
    }
}