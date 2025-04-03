#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n,k;
        cin >>n>>k;
        string s;
        cin >> s;
        unordered_map<char,int>Count;
        for (char c : s) {
            Count[c]++;
        }
        int odd = 0;

        for (auto X : Count) {
            if (X.second % 2 != 0) {
                odd++;
            }
        }
        if(odd<= k||(k>=odd-1 &&(k-odd+1)%2==0)){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
