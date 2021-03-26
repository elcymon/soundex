#include "soundex.hpp"
std::string Soundex::encode(const std::string& word) {
    
    std::string encoded_word = word2code(word);
    return encoded_word;
}

std::string Soundex::word2code(const std::string& word)
{ 
    std::string encoded_word {word.front()};
    unsigned int letter_index = 1;
    while (encoded_word.length() < MaxCodeLength)
    {
        if (letter_index < word.length())
        {
            encoded_word += letter2code.at(word[letter_index]);
            letter_index++;
        }
        else
        {
            encoded_word += "0";
        }
    }
    return encoded_word;
}