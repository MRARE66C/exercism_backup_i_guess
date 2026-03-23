#include "luhn.h"

namespace luhn {

// TODO: add your solution here
    bool valid(std::string input){
        int totalSum {0};
        int digitCount {0};

        for (auto it = input.rbegin(); it != input.rend(); ++it){
            char c = *it;

            if (std::isspace(c)){
                continue;
            }

            if (!std::isdigit(c)){
                return false;
            }

            int number = c - '0';
            digitCount++;

            if (digitCount % 2 == 0) {
                number *= 2;
                if (number > 9) {
                    number -= 9;
                }
            }

            totalSum += number;
        }
        return (digitCount > 1) && (totalSum % 10 == 0);
    }
}  // namespace luhn
