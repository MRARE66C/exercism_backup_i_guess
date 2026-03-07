#include "darts.h"
#include <cmath>

namespace darts {

// TODO: add your solution here
    int score(float x, float y){
        float score = std::sqrt((x*x) + (y*y));
        if (score <= 1){
            return 10;
        }
        else if (score <= 5){
            return 5;
        }
        else if (score <= 10){
            return 1;
        }
        else{
            return 0;
        }
    }

}  // namespace darts
