#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	string s;
	cin >> n >> s;
	string res = "";
	// based on observation (with trial and error method)
	if (n % 2 == 0) {
		// if the size of the string is even, then the indices of the letters that
		// you must collect should consist of the first half of even numbers in decreasing order
		// and the second half of odd numbers in increasing order
		// first half: run a for-loop from the last index and start concatenating characters 
		// that are placed in an even position (zero-based) in decreasing order
		for (int i = n - 1; i >= 0; i--) {
			if (i % 2 == 0) {
				res += s[i];
			}
		}
		// second half: run a for-loop starting with index 0 an dstart concatenating characters
		// that are place in an odd position (zero-based) in increasing order
		for (int i = 0; i < n; i++) {
			if (i & 1) {
				res += s[i];
			}
		}
	} else {
		// if the size of the string is odd, then the indices of the letters that
		// you must collect should consist of the first half of odd numbers in decreasing order
		// and the second half of even numbers in increasing order
		// first half: run a for-loop from the last index and start concatenating characters 
		// that are placed in an odd position (zero-based) in decreasing order
		for (int i = n - 1; i >= 0; i--) {
			if (i & 1) {
				res += s[i];
			}
		}
		// second half: run a for-loop starting with index 0  and start concatenating characters
		// that are place in an even position (zero-based) in increasing order
		for (int i = 0; i < n; i++) {
			if (i % 2 == 0) {
				res += s[i];
			}
		}
	}
	cout << res << '\n';
	return 0;
}
