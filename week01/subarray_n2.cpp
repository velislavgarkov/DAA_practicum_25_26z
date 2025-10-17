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
	for (int i = 1; i <= n; i++) {
		long long cur_sum = 0;
		for (int j = i; j <= n; j++) {
			cur_sum += a[j];
			if ((j - i + 1) % 2 == 1) ans += cur_sum;
		}
	}
	cout << ans << endl;
	return 0;
}
