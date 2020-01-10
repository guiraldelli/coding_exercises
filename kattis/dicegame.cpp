#include <bits/stdc++.h>

using namespace std;

typedef unsigned short us_t;
typedef unsigned int ui_t;
typedef unsigned long ul_t;

int main() {
    array<us_t, 4> gunnar_dice;
    array<us_t, 4> emma_dice;

    for (us_t i = 0; i < 4; ++i) {
        cin >> gunnar_dice[i];
    }
    for (us_t i = 0; i < 4; ++i) {
        cin >> emma_dice[i];
    }

    // Gunnar
    const ui_t gunnar_dividend = (gunnar_dice[1]-gunnar_dice[0] + 1) * (gunnar_dice[3]-gunnar_dice[2] + 1);
    ui_t gunnar_sum = 0;
    for (us_t face_one = gunnar_dice[0]; face_one <= gunnar_dice[1]; ++face_one) {
        for (us_t face_other = gunnar_dice[2]; face_other <= gunnar_dice[3]; ++face_other) {
            gunnar_sum += (face_one + face_other);
        }
    }

    // Emma
    const ui_t emma_dividend = (emma_dice[1]-emma_dice[0] + 1) * (emma_dice[3]-emma_dice[2] + 1);
    ui_t emma_sum = 0;
    for (us_t face_one = emma_dice[0]; face_one <= emma_dice[1]; ++face_one) {
        for (us_t face_other = emma_dice[2]; face_other <= emma_dice[3]; ++face_other) {
            emma_sum += (face_one + face_other);
        }
    }

    // E1 - E2 = (S1 / D1) - S2 / D2;
    // E1 - E2 = ( (D2 * S1) - (D1 * S2) ) / (D1 * D2)
    // (E1 - E2) * (D1 * D2) = (D2 * S1) - (D1 * S2)
    // but we know (D1 * D2) > 0
    // thus we just should evaluate:
    //   1. (D2 * S1) == (D1 * S2)
    //   2. (D2 * S1) > (D1 * S2)
    // where:
    // 	 E1 = gunnar_expectancy
    // 	 E2 = emma_expectancy
    // 	 S1 = gunnar_sum
    // 	 S2 = emma_sum
    // 	 D1 = gunnar_dividend; and,
    // 	 D2 = emma_dividend
    const ul_t gunnar_expectancy = gunnar_sum * emma_dividend;
    const ul_t emma_expectancy = emma_sum * gunnar_dividend;

    if (gunnar_expectancy == emma_expectancy)
        cout << "Tie" << endl;
    else if (gunnar_expectancy > emma_expectancy)
        cout << "Gunnar" << endl;
    else
        cout << "Emma" << endl;

    return 0;
}
