#include <iostream>

int main() {
    unsigned int decimal;
    unsigned int reversed_binary = 0;
    unsigned int position = 1;
    std::cin >> decimal;
    while (decimal >= position) {
        unsigned int bit_and = decimal & position;
        if (bit_and == position) {
            reversed_binary <<= 1;
            reversed_binary += 1;
        }
        else {
            reversed_binary <<= 1;
        }
        position *= 2;
    }
    std::cout << reversed_binary << std::endl;
    return 0;
}
