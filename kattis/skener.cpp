#include <bits/stdc++.h>

using namespace std;

int main() {
	// first line
	unsigned short rows;
	unsigned short columns;
	unsigned short repeat_rows;
	unsigned short repeat_columns;
	cin >> rows;
	cin >> columns;
	cin >> repeat_rows;
	cin >> repeat_columns;
	string line;
	for (unsigned short r = 0; r < rows; ++r) {
		cin >> line;
		// process the line
		for (unsigned short zr = 0; zr < repeat_rows; ++zr) {
			for (unsigned short c = 0; c < columns; ++c) {
				for (unsigned short zc = 0; zc < repeat_columns; ++zc) {
					cout << line[c];
				}
			}
			cout << endl;
		}
	}
	return 0;
}
