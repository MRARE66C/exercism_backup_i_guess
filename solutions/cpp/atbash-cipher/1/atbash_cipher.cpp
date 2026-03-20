#include "atbash_cipher.h"

namespace atbash_cipher {

// TODO: add your solution here
    std::string plain {"abcdefghijklmnopqrstuvwxyz"};
    std::string cipher {"zyxwvutsrqponmlkjihgfedcba"};
    
    std::string encode(std::string inputStr){
        std::string output;
        int count {0};

        for (auto c: inputStr){
            if(std::isspace(c) || std::ispunct(c)) continue;
            if (count == 5){
                output.push_back(' ');
                count = 0;
            }
            output.push_back(std::isalpha(c) ? cipher.at(plain.find(std::tolower(c))): c);
            count++;
        }

        return output;
    }

    std::string decode(std::string inputStr){
        std::string output;

        for (auto c : inputStr){
            if (c == ' ') continue;
            output.push_back(std::isalpha(c) ? plain.at(cipher.find(std::tolower(c))): c);
        }

        return output;
    }
        
}  // namespace atbash_cipher
