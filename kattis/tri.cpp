#include <bits/stdc++.h>

using namespace std;

int main() {
	const array<function<int(int, int)>, 4> operations = {
		  [](int one, int another){ return one + another; }
		, [](int one, int another){ return one - another; }
		, [](int one, int another){ return one * another; }
		, [](int one, int another){ return one / another; }
	};
	const array<char, 4> signs = { '+', '-', '*', '/' };

	array<int, 3> numbers;
	cin >> numbers[0] >> numbers[1] >> numbers[2];

	for (short i = 0; i < 4; ++i) {
		if (numbers[2] == operations[i](numbers[0], numbers[1])){
			cout << numbers[0] << signs[i] << numbers[1] << '=' << numbers[2] << endl;
			return 0;
		}
		if (numbers[0] == operations[i](numbers[1], numbers[2])){
			cout << numbers[0] << '=' << numbers[1] << signs[i] << numbers[2] << endl;
			return 0;
		}
	}

	return 0;
}
