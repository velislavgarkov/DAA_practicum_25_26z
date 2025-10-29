#include <bits/stdc++.h>
using namespace std;

const int MAXN = 2e6 + 10;
int a[MAXN];

void heapify(int idx, int n) {
    int l, r, maxIdx = idx;
    l = idx * 2;
    r = idx * 2 + 1;
    if (l <= n && a[l] > a[maxIdx]) maxIdx = l;
    if (r <= n && a[r] > a[maxIdx]) maxIdx = r;

    if (maxIdx != idx) {
        swap(a[maxIdx], a[idx]);
        heapify(maxIdx, n);
    }
}

int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    for (int i = n; i >= 1; i--) {
        heapify(i, n);
    }
    for (int i = n; i >= 2; i--) {
        swap(a[1], a[i]);
        heapify(1, i - 1);
    }
    for (int i = 1; i <= n; i++) cout << a[i] << ' ';
    return 0;
}
