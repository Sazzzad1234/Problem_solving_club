#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string a, b;
        cin >> a >> b;

        bool possible = true;
        int sum_a_ones = 0;
        for (int i = 0; i < n; i += 2) {
            if (a[i] == '1') sum_a_ones++;
        }
        int sum_b_zeros = 0;
        for (int i = 1; i < n; i += 2) {
            if (b[i] == '0') sum_b_zeros++;
        }
        if (sum_a_ones > 0 && sum_b_zeros == 0) {
            possible = false;
        }
        sum_a_ones = 0;
        for (int i = 1; i < n; i += 2) {
            if (a[i] == '1') sum_a_ones++;
        }
        sum_b_zeros = 0;
        for (int i = 0; i < n; i += 2) {
            if (b[i] == '0') sum_b_zeros++;
        }
        if (sum_a_ones > 0 && sum_b_zeros == 0) {
            possible = false;
        }

        if (possible) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
        
    }
    return 0;
}