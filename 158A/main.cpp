#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;
    k--;
    
    vector<int> a(n, 0);

    for (int i = 0; i != n; i++) {
        cin >> a[i];
    }
    
    int val = a[k];
    int count = 0;

    for (int i : a) {
        if (i >= val && i > 0) {
            count++;
        } else {
            break;
        }
    }

    cout << count;

    return 0;
}