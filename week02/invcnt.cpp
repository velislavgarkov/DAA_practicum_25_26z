#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e6 + 10;

int a[MAXN], b[MAXN];

long long invcnt(int l, int r) {
	if (l == r) {
		return 0;
	}
	int mid = (r - l) / 2 + l;
	long long res = invcnt(l, mid) + invcnt(mid + 1, r);
	
	int i = l, j = mid + 1, pos = l;
	while (i <= mid || j <= r) {
		if (i > mid) {
			b[pos] = a[j];
			j++; pos++;
		} else if (j > r) {
			b[pos] = a[i];
			i++; pos++;
			res += j - mid - 1;
		} else if (a[i] < a[j]) {
			b[pos] = a[i];
			i++; pos++;
			res += j - mid - 1;
		} else {
			b[pos] = a[j];
			j++; pos++;
		}
	}
	
	for (int i = l; i <= r; i++) a[i] = b[i];
	return res;
}

int main () {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) cin >> a[i];
	
	cout << invcnt(1, n) << endl;
	return 0;
}
