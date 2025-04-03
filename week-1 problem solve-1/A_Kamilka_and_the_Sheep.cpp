#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        long long min_val = *min_element(a.begin(), a.end());
        long long max_val = *max_element(a.begin(), a.end());
        cout << max_val - min_val << endl;
    }
    return 0;
}