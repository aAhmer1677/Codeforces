#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int count = 0;
    vector<int> cash = {100, 20, 10, 5, 1};

    for (int i : cash) {
        while (n >= i) {
            n -= i;
            count++;
        }
    }

    cout << count;

    return 0;
}