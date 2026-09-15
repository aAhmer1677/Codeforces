#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    
    vector<vector<int>> a(n, {0, 0, 0});
    int count = 0;
    int temp;
    int tempx = 0;

    for (int i = 0; i != n; i++) {
        temp = 0;
        for (int j = 0; j != 3; j++) {
            cin >> tempx;
            temp += tempx;
        }

        if (temp >= 2) {
            count++;
        }
    }
    

    cout << count;

    return 0;
}