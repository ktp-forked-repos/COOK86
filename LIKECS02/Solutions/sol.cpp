// O(n)

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n;
	cin >> t;
	while(t--) {
		cin >> n;
		for(int i = 1; i <= n; ++i) {
			cout << 2*i << " ";
		}
		cout << "\n";
	}
	return 0;
}