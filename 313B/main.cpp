#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    int n = s.length();

    vector<int> dp(n, 0);

    dp[0] = 0;
    
    for (int i = 1; i < n; i++) {
        if (s[i-1] == s[i]) {
            dp[i] = dp[i-1] + 1;
        } else {
            dp[i] = dp[i-1];
        }
    }

    int q;
    int l, r;
    cin >> q;

    for (int i = 0; i != q; i++) {
        cin >> l >> r;
        cout << dp[r-1] - dp[l-1] << "\n";
    }

    return 0;
}