#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e4 + 10;

long long a[MAXN];

int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    
    long long ans = 0;
    for (long long i = 1; i <= n; i++) {
        ans += a[i] * ((i * (n - i + 1) + 1) / 2);
    }
    
    cout << ans << endl;
    return 0;
}
