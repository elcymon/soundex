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

TEST_F(SoundexEncoding, EncodingBConsonantMappedTo1) {
    ASSERT_EQ(soundex.encode("Bb"),"B100");
}

TEST_F(SoundexEncoding, EncodingRConsonantsMappedTo6) {
    ASSERT_EQ(soundex.encode("Br"),"B600");
}