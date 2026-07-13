#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
void solve() {
    int n;
    cin >> n;
    vector<long long> a(n);
    vector<long long> b(n);

    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];
    vector<long long> sorted_a = a;
    vector<long long> sorted_b = b;
    sort(sorted_a.begin(), sorted_a.end());
    sort(sorted_b.begin(), sorted_b.end());
    for (int i = 0; i < n; i++) {
        if (sorted_a[i] > sorted_b[i]) {
            cout << -1 << "\n";
            return;
        }
    }
    vector<int> p(n);
    vector<int> is_used(n, 0); 
    for (int i = 0; i < n; i++) {
        int best_index = -1;
        for (int j = 0; j < n; j++) {
            if (is_used[j] == 0 && b[j] >= a[i]) {
                best_index = j;
                break; 
            }
        }
        is_used[best_index] = 1;
        p[best_index] = i; 
    }
    long long s = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (p[i] > p[j]) {
                s++;
            }
        }
    }
    cout << s << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}