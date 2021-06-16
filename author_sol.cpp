#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	string s;
	cin >> n >> s;
	string decoded = "";
	int index = 0;
	while (n > 0) {
		if (n & 1) {
			// if 'n' is odd, then add the current letter in the 'decoded' string in the
			// order that it appeared
			decoded += s[index];
		} else {
			// otherwise, add the current letter at the beginning of the 'decoded' string
			decoded = s[index] + decoded;
		}
		// decrement 'n'
		n--;
		// increment 'index'
		index++;
	}
	cout << decoded << '\n';
	return 0;
}
