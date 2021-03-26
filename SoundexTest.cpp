#include "gmock/gmock.h"
#include "soundex.hpp"
class SoundexEncoding : public testing::Test {
    public:
        Soundex soundex;
};

TEST_F(SoundexEncoding, RetainFirstLetterOfWord) {
    std::string encoded_word = soundex.encode("Abcde");
    ASSERT_EQ(encoded_word.front(),'A');
}

TEST_F(SoundexEncoding, ZeroPadOneLetterWord) {
    std::string encoded_word = soundex.encode("B");
    ASSERT_EQ(encoded_word,"B000");
}