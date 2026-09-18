#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
 
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n, k;
    cin >> n >> k;
 
    vector<int> a(n+1, 0);
    vector<int> pref(n+1, 0);
 
    for (int i = 1; i != n+1; i++) {
        cin >> a[i];
        pref[i] = pref[i-1] + a[i];        
    }
 
    int mb = 2e9;
    int mi = 1;
    int s;
 
    for (int i = 1; i <= (n-k+1); i++) {
        s = pref[i+k-1]-pref[i-1];
        if (min(s, mb) == s) {
            mi = i;
            mb = s;
        }
    }
    
    cout << mi;
 
    
    return 0;
}