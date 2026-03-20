#include "difference_of_squares.h"

namespace difference_of_squares {

// TODO: add your solution here
    int square_of_sum(int input){
        int output{};
        for(int i = 1; i <= input; i++){
            output += i;
        }
        output = output * output;
        return output;
    }

    int sum_of_squares(int input){
        int output{};

        for(int i = 1; i <= input; i++){
            output += i * i;
        }

        return output;
    }

    int difference(int input){
        return square_of_sum(input) - sum_of_squares(input);
    }

}  // namespace difference_of_squares
