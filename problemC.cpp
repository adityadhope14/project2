#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    long long maxi = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] < maxi) {
            maxi += a[i];
        } else {
            maxi = a[i];
        }
    }
    
    cout << maxi << "\n";
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