#include <bits/stdc++.h>
using namespace std;

const int MAXN = 3e6 + 10;
const int MAXX = 1024;

int a[MAXN], cnt[MAXX], pos[MAXX], ans[MAXN];

int main () {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	int n, maxx = 0;
	cin >> n;
	
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		cnt[a[i]]++;
		maxx = max(a[i], maxx);
	}
	
	pos[0] = cnt[0];
	for (int i = 1; i <= maxx; i++) {
		pos[i] = pos[i - 1] + cnt[i];
	}
	
	for (int i = n; i >= 1; i--) {
		ans[pos[a[i]]] = a[i];
		pos[a[i]]--;
	}
	
	for (int i = 1; i <= n; i++) cout << ans[i] << ' ';
	cout << endl;
	return 0;
}
