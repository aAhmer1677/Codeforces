#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> a(3, 0);
    cin >> a[0] >> a[1] >> a[2];

    vector<int> x = {};
    x.push_back((a[0]+a[1])*a[2]);
    x.push_back((a[0]*(a[1]+a[2])));
    x.push_back(a[0]+a[1]+a[2]);
    x.push_back(a[0]*a[1]*a[2]);

    int f = *max_element(x.begin(), x.end());

    cout << f;

    return 0;
}