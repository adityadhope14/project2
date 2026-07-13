
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
    for (int i = n - 1; i >= 0; i--) {
        int best_index = -1;
        long long best_value = -1;
        for (int j = 0; j < n; j++) {
            if (is_used[j] == 0 && a[j] <= b[i]) {
                if (a[j] >= best_value) {
                    best_value = a[j];
                    best_index = j;
                }
            }
        }
        
        is_used[best_index] = 1;
        p[i] = best_index;
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
// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// void solve() {
//     int n;
//     cin >> n;
//     vector<long long> a(n), b(n);
//     for (int i = 0; i < n; i++) cin >> a[i];
//     for (int i = 0; i < n; i++) cin >> b[i];
//     vector<long long> sa = a;
//     vector<long long> sb = b;
//     sort(sa.begin(), sa.end());
//     sort(sb.begin(), sb.end());

//     for (int i = 0; i < n; i++) {
//         if (sa[i] > sb[i]) {
//             cout << -1 << endl;
//             return;
//         }
//     }
//     vector<pair<long long, int>> pairs(n);
//     for (int i = 0; i < n; i++) {
//         pairs[i] = {a[i], i};
//     }
//     stable_sort(pairs.begin(), pairs.end());

//     vector<int> target_indices(n);
//     for (int i = 0; i < n; i++) {
//         target_indices[pairs[i].second] = i;
//     }

//     long long swaps = 0;
//     for (int i = 0; i < n; i++) {
//         for (int j = i + 1; j < n; j++) {
//             if (target_indices[i] > target_indices[j]) {
//                 swaps++;
//             }
//         }
//     }

//     cout << swaps << endl;
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int t;
//     if (!(cin >> t)) return 0;
//     while (t--) {
//         solve();
//     }
//     return 0;
// }





// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// void solve() {
//     int n;
//     cin >> n;
//     vector<long long> a(n), b(n);
//     for(int i = 0; i < n; i++) cin >> a[i];
//     for(int i = 0; i < n; i++) cin >> b[i];
//     vector<long long> sorted_a = a;
//     vector<long long> sorted_b = b;
//     sort(sorted_a.begin(), sorted_a.end());
//     sort(sorted_b.begin(), sorted_b.end());
//     for(int i = 0; i < n; i++) {
//         if(sorted_a[i] > sorted_b[i]) {
//             cout << -1 << endl;
//             return;
//         }
//     }
//     vector<pair<long long, int>> pairs(n);
//     for(int i = 0; i < n; i++) {
//         pairs[i] = {a[i], i};
//     }
//     sort(pairs.begin(), pairs.end());
//     vector<int> target_indices(n);
//     for(int i = 0; i < n; i++) {
//         target_indices[pairs[i].second] = i;
//     }
//     long long s = 0;
//     for(int i = 0; i < n; i++) {
//         for(int j = i + 1; j < n; j++) {
//             if(target_indices[i] > target_indices[j]) {
//                 s++;
//             }
//         }
//     }
//     cout << s << endl;
// }
// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int t;
//     cin >> t;
//     while(t--) {
//         solve();
//     }
//     return 0;
// }

