#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> p(n);

    for (int i = 0; i < n; i++) {
        cin >> p[i];
        p[i]--;
    }

    for (int start_student = 0; start_student < n; start_student++) {
        vector<bool> visited(n, false);

        int current = start_student;

        while (true) {
            if (visited[current] == true) {
                cout << current + 1 << " "; 
                break;
            }

            visited[current] = true;

            current = p[current];
        }
    }

    return 0;
}