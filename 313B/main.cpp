#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    int n = s.length();

    vector<int> a(n+1, 0);

    for(int i = 1; i < n; i++) {
        a[i + 1] = a[i];
        if (s[i] == s[i-1]) {
            a[i+1]++;
        }
    }
    
    int q;
    cin >> q;

    for (int i = 0; i != q; i++) {
        int l, r;
        cin >> l >> r;

        cout << (a[r] - a[l]) << "\n";
    }

    return 0;
}