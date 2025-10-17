#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main () {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	stack <int> st;
	int a;
	while (cin >> a) {
		st.push(a);
	}
	
	while (!st.empty()) {
		cout << fixed << setprecision(6) << sqrt(st.top()) << endl;
		st.pop();
	}
	return 0;
}
