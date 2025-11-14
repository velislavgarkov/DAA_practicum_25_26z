#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

long double x1, Y1, x2, y2, v1, v2;
const long double epsilon = 1e-5;

long double f(long double x) {
	return sqrt((x - x1) * (x - x1) + Y1*Y1) / v1 + sqrt((x-x2) * (x-x2) + y2*y2) / v2;
}

void solve() {
	cin >> x1 >> Y1 >> x2 >> y2 >> v1 >> v2;
	
	long double l, r, mid1, mid2;
	l = min(x1, x2); r = max(x1, x2);
	
	while (r - l >= epsilon) {
		mid1 = l + (r - l) / 3.0;
		mid2 = l + (r - l) * (2.0 / 3.0);
		
		//cout << l << ' ' << r << ' ' << mid1 << ' ' << mid2 << ' ' << f(mid1) << ' ' << f(mid2) << endl;
		 
		if (f(mid1) < f(mid2)) {
			r = mid2;
		} else {
			l = mid1;
		}
	}
	cout << fixed << setprecision(5) << f(l) << endl;
}

int main () {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	int t; cin >> t;
	while (t--) solve();
	return 0;
}
