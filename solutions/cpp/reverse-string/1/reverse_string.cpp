#include "reverse_string.h"

namespace reverse_string {

// TODO: add your solution here
    std::string reverse_string(std::string str){
        if(str == ""){
            return "";
        }
        else{
            std::string output;
            for(int i = str.length() - 1; i > -1; i--){
                output += str[i];
            }
            return output;
        }
    }

}  // namespace reverse_string
