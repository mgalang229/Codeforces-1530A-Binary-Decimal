#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		int res = INT_MIN;
		// find largest in the number (it will be the minimum number of 1s needed)
		while (n > 0) {
			res = max(res, n % 10);
			n /= 10;
		}
		cout << res << '\n';
	}
	return 0;
}
