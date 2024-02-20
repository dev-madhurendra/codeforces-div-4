#include <bits/stdc++.h>

using namespace std;

void solve() {
	
	int countA = 0;
	int countB = 0;
	for (int i = 0; i < 5; ++i) {
		char ch;
		cin >> ch;
		if ( ch == 'A' )
			countA++;
		else
			countB++;
	}
	cout << (countA > countB ? 'A' : 'B') << endl;

}

int main() {

#ifndef ONLINE_JUDGE
	freopen("inputf.in", "r", stdin);
	freopen("outputf.out", "w", stdout);
#endif

	int t;
	cin >> t;

	while(t--)
		solve();
}
