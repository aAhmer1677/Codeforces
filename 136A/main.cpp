#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    
    vector<int> a(n, 0);
    vector<int> b(n, 0);
    
    for (int i = 0; i != n; i++) {
        cin >> a[i];
        b[a[i]-1] = i;
    }

    for (int i : b) {
        cout << i+1 << " ";
    }

    return 0;
}