#include <iostream>
#include <vector>
#include <string>

using namespace std;

void solve() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    vector<char> a(s.begin(), s.end());

    int moves = 0;
    int total = 0;

    for (char i : a) {
        if (i == '(') {
            total++;
        } else {
            total--;
        }

        if (total < 0) {
            total = 0;
            moves++;
        }
    }

    cout << moves << "\n";
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