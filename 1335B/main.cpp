#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n, a, b;
    cin >> n >> a >> b;

    string s;
    string alpha = "abcdefghijklmnopqrstuvwxyz";
    vector<char> alphabet(alpha.begin(), alpha.end());
    
    vector<char> f = {};

    int idx = 0;

    for (int i = 0; i != n; i++) {
        idx = i % b;
        cout << (alpha[idx]);
    }

    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}