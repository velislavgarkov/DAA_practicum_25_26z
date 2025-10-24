#include <bits/stdc++.h>
using namespace std;

const int MAXN = 3e5 + 10;

int a[MAXN];

int main () {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	int n, rad;
	cin >> n >> rad;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];	
	}
	
	int r = 1;
	long long ans = 0;
	for (int l = 1; l <= n; l++) {
		while (r <= n && a[r] - a[l] <= rad) r++;
		ans += n - r + 1;
	}
	
	cout << ans << endl;
	return 0;
}
