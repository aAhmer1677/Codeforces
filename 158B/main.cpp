#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> freq(5, 0); 
    int temp;
    
    for (int i = 0; i != n; i++) {
        cin >> temp;
        freq[temp]++;
    }

    int taxis = 0;

    taxis += freq[4] + freq[3];
    freq[1] = max(0, freq[1] - freq[3]);

    int x = freq[2] / 2;
    taxis += x;

    freq[2] -= x*2;

    if (freq[2] == 1) {
        taxis += 1;
        freq[1] = max(freq[1]-2, 0);
        
    }

    if ((freq[1] & 3) == 0) {
        taxis += freq[1] / 4;
    } else {
        taxis += freq[1] / 4 + 1;
    }

    cout << taxis;

    return 0;
}