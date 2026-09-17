#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int b;
    cin >> b;

    vector<int> bs(b, 0);

    for (int i = 0; i != b; i++) {
        cin >> bs[i];
    }

    int g;
    cin >> g;

    vector<int> gs(g, 0);

    for (int i = 0; i != g; i++) {
        cin >> gs[i];
    }

    sort(bs.begin(), bs.end()); sort(gs.begin(), gs.end());

    int pairs = 0;
    int cg = 0;

    for (int i : bs) {
        while (gs[cg] < (i-1)){
            cg++;
        }
        if (abs(i-gs[cg]) <= 1) {
            pairs += 1;
            cg++;
        }
    }

    cout << pairs;


    return 0;
}