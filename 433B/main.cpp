#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    long long n;
    cin >> n;

    vector<long long> v(n, 0);

    for (long long i = 0; i != n; i++) {
        cin >> v[i];
    }

    vector<long long> s(v.begin(), v.end());
    sort(s.begin(), s.end());

    vector<long long> pv(n+1, 0);
    vector<long long> ps(n+1, 0);
 
    for (long long i = 1; i != n+1; i++) {
        pv[i] = pv[i-1] + v[i-1];
        ps[i] = ps[i-1] + s[i-1];
    }

    long long q;
    cin >> q;
    long long t, l, r;

    while (q--) {
        cin >> t >> l >> r;

        if (t == 1) {
            cout << pv[r] - pv[l-1] << "\n";
        } else {
            cout << ps[r] - ps[l-1] << "\n";
        }
    }
    
    return 0;
}