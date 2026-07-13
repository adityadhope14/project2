#include <iostream>
#include <vector>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int i = 0 ;
        int j = 1 ;
        while(i<n && j<n ){
            if(a[i]<=a[j]){
                a[j] = a[i];
                i++;
                j++;
            }
            else{
                i++;
                j++;
            }
        }
        int sum = 0 ;
        for(int i = 0 ; i<n ; i++){
            sum+=a[i];
        }
        cout<<sum<<endl;
    }
}        