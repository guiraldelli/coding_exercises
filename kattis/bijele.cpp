#include <bits/stdc++.h>

using namespace std;

int main() {
	const array<unsigned short, 6> pieces_should {1, 1, 2, 2, 2, 8};
	array<unsigned short, 6> pieces_found;

	for (unsigned short i = 0; i < 6; ++i) {
		cin >> pieces_found[i];
		cout << (short) pieces_should[i] - pieces_found[i];
		if (i < 5) {
			cout << " ";
		}
	}

	return 0;
}
