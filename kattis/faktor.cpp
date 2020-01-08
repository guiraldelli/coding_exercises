#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(0);
    int articles;
    int index;
    int bribes;
    cin >> articles;
    cin >> index;
    bribes = index * articles - (articles - 1);
    cout << bribes << endl;
    return 0;
}
