#include <bits/stdc++.h>

using namespace std;

int main() {
    unsigned int amount_entries;
    do {
        cin >> amount_entries;
        vector<string> favorite_word;
        unsigned short greatest_double_vowels = 0;
        for (size_t i = 0; i < amount_entries; ++i) {
            string entry;
            cin >> entry;

            unsigned short current_doubles = 0;
            for(size_t j = 0; j < entry.size() - 1; ++j) {
                if (
                        (entry.at(j) == entry.at(j + 1)) &&
                        (
                            (entry.at(j) == 'a') ||
                            (entry.at(j) == 'e') ||
                            (entry.at(j) == 'i') ||
                            (entry.at(j) == 'o') ||
                            (entry.at(j) == 'u') ||
                            (entry.at(j) == 'y')
                        )
                   )
                    ++current_doubles;
            }
            if (current_doubles > greatest_double_vowels) {
                favorite_word.clear();
                favorite_word.push_back(entry);
                greatest_double_vowels = current_doubles;
            }
            else if (current_doubles == greatest_double_vowels) {
                favorite_word.push_back(entry);
                greatest_double_vowels = current_doubles;
            }
        }
        for (size_t i = 0; i < favorite_word.size(); ++i) {
            cout << favorite_word.at(i) << endl;
        }
    } while (amount_entries > 0);
    return 0;
}
