#include "rotational_cipher.h"

namespace rotational_cipher {

// TODO: add your solution here
    std::string rotate(std::string strInput, int shift){
        std::string output;

        shift = (shift % 26 + 26) % 26;

        for (char c : strInput){
            if (isalpha(c)){
                char base = isupper(c) ? 'A' : 'a';

                output += (c - base + shift) % 26 + base;
            }
            else{
                output += c;
            }
        }

        return output;
    }

}  // namespace rotational_cipher
