#ifndef Soundex_hpp
#define Soundex_hpp
#include <string>
#include <map>

class Soundex {
    public:
        std::string encode(const std::string& word);
    private:
        const unsigned int MaxCodeLength {4};
        const std::map<char,std::string> letter2code{
            {'b',"1"},{'f',"1"},{'p',"1"},{'v',"1"},
            {'c',"2"},{'g',"2"},{'j',"2"},{'k',"2"},
                {'q',"2"},{'s',"2"},{'x',"2"},{'z',"2"},
            {'d',"3"},{'d',"3"},
            {'l',"4"},
            {'m',"5"},{'n',"5"},
            {'r',"6"}
        };
        std::string word2code(const std::string& word);
};

#endif //Soundex_hpp