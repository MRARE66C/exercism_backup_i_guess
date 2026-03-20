#include "trinary.h"

namespace trinary {

// TODO: add your solution here
    int to_decimal(std::string input){
        int output{};
        for (char c : input){
            if (isalpha(c)) return 0;
            else{
            int number = c - '0';
            output = (output * 3) + number;
            }
        }
        return output;
    }

}  // namespace trinary
