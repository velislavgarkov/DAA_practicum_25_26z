#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e4 + 10;

long long a[MAXN];
long long pref[MAXN];

int main () {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	int n;
	cin >> n;
	pref[0] = 0;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		pref[i] = pref[i - 1] + a[i];
	}
	
	long long ans = 0;
	for (int i = 1; i <= n; i++) {
		for (int j = i; j <= n; j++) {
			if ((j - i + 1) % 2 == 1) ans += pref[j] - pref[i - 1];
		}
	}
	cout << ans << endl;
	return 0;
}
