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
    int sum = 0;

    for (int i = 0; i != n; i++) {
        cin >> a[i];
        sum += a[i];
    }


    if ((sum << 1) == 0) {
        sum /= 2;
    } else {
        sum /= 2;
        sum++;
    }

    sort(a.rbegin(), a.rend());

    int collec = 0;
    int count = 0;

    for (int i : a) {
        collec += i;
        count ++;
        
        if (collec >= sum) {
            break;
        }
    }

    cout << count;

    return 0;
}