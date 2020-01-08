#include <bits/stdc++.h>

using namespace std;

int main() {
    long area = 0;
    double side = 0;
    cin >> area;
    side = sqrt(static_cast<long double>(area));
    printf("%.10g", 4 * side);
    return 0;
}
