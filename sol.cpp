#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		long long x, y, k;
		cin >> x >> y >> k;
		if ((x + y) / k % 2 == 0) {
			cout << "Chef";
		} else {
			cout << "Paja";
		}
		cout << '\n';
	}
	return 0;
}
