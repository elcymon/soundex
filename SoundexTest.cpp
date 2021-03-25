#include "gmock/gmock.h"
#include "soundex.hpp"

TEST(SoundexEncoding, RetainFirstLetterOfWord) {
    Soundex soundex;
    std::string encoded_word = soundex.encode("A");
    ASSERT_EQ(encoded_word.front(),'A');
}