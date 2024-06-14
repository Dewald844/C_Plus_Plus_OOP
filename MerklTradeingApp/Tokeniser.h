#include <vector>
#include <string>

class Tokeniser {
    public:
        std::vector<std::string> tokenise(std::string csvLine, char separator);
};