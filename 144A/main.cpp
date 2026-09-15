#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    
    vector<int> a(n, 0);

    for (int i = 0; i != n; i++) {
        cin >> a[i];
    }

    int mx = *max_element(a.begin(), a.end());
    int mn = *min_element(a.begin(), a.end());

    int mx_it = find(a.begin(), a.end(), mx) - a.begin();
    int mn_it = a.rend() - find(a.rbegin(), a.rend(), mn);

    int count = 0;

    count += (mx_it + 1);
    count += (n - mn_it - 1);

    if (mx_it >= mn_it) {
        count--;
    }

    cout << count;

    return 0;
}