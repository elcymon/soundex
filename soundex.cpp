#include "soundex.hpp"
std::string Soundex::encode(std::string word) {
    if(word.length() == 1)
    {
        return word + "000";
    }
    return word;
}