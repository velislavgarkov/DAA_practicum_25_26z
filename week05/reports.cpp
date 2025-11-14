#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e5 + 10;

int a[MAXN];

int main () {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	int n;
	cin >> n;
	a[0] = -1;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	
	stack <int> st;
	st.push(0);
	
	for (int i = 1; i <= n; i++) {
		while (!st.empty() && a[st.top()] >= a[i]) st.pop();
		cout << st.top() << ' ';
		st.push(i);
	}
	cout << endl;
	return 0;
}
