#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e5 + 10;
const int MAXC = 3e3 + 10;

struct Point {
	int x;
	int type;
	int nationality;
	friend bool operator < (Point a, Point b) {
		if (a.x != b.x) return a.x < b.x;
		return a.type > b.type;
	}
};

Point p[2 * MAXN];
int cnt[MAXC];

int main () {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int a, b, c; cin >> a >> b >> c;
		p[i * 2] = {a, 1, c};
		p[i * 2 + 1] = {b, -1, c};
	}
	
	sort(p, p + 2*n);
	
	int ans = 0;
	for (int i = 0; i < 2*n; i++) {
		cnt[p[i].nationality] += p[i].type;
		
		ans = max(ans, cnt[p[i].nationality]);
	}
	
	cout << ans << endl;
	return 0;
}
