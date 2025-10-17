#include <bits/stdc++.h>
using namespace std;

int main () {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int n;
	long long sum = 0, a;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a;
		sum += a;
	}
	cout << sum << endl;
	return 0;
}
