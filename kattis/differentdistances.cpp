#include <bits/stdc++.h>

using namespace std;

typedef unsigned short us_t;

int main() {
	do {
		// read input
		string line;
		getline(cin, line);
		// verify whether it should stop or
		if (line == "0")
			break;
		double x1, y1, x2, y2, p, distance;
		istringstream reader(line);
		reader >> x1 >> y1 >> x2 >> y2 >> p;
		// compute 
		distance = pow( pow(abs(x1 - x2), p) + pow(abs(y1 - y2), p), (1.0 / p) );
		printf("%.010f\n", distance);
	} while (true);

	return 0;
}
