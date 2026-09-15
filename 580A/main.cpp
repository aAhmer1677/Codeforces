#include <iostream>
#include <vector>
#include <algorithm>

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

    int left = 0;
    int mx = 1;

    for (int right = 1; right != n; right++) {
        if (a[right] >= a[right-1]) {
            mx = max(right-left+1, mx);
        } else {
            left = right;
        }
    }
    
    cout << mx;

    return 0;
}