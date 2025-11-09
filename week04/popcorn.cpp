#include <bits/stdc++.h>
using namespace std;

#define int long long

const int MAXN = 1e5 + 10;
int n, k, s;

int p[MAXN];

bool pred(int t) {
	int ost = t * s, cnt = 1;
	
	for (int i = 0; i < n; i++) {
		if (p[i] > ost) {
			cnt++;
			if (cnt > k) return false;
			ost = t * s;
		}
		ost -= p[i];
	}
	return true;
}

signed main () {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	cin >> n >> k >> s;
	int maxP = 0;
	for (int i = 0; i < n; i++) {
		cin >> p[i];
		maxP = max(maxP, p[i]);
	}
	
	int l, r, mid, ans = 1;
	
	if (maxP % s == 0) l = maxP / s;
	else l = maxP / s + 1;
	r = 5e10 + 5;
	
	while (l <= r) {
		mid = (l + r) / 2ll;
		
		if (pred(mid)) {
			r = mid - 1;
			ans = mid;
		}
		else l = mid + 1;
	}
	
	cout << ans << endl;
	return 0;
}
/*
5 3 4
5 8 3 10 7
*/
