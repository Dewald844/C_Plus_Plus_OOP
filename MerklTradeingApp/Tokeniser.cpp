#include "Tokeniser.h"

#include <string>
#include <vector>
#include <iostream>

std::vector<std::string> Tokeniser::tokenise(std::string csvLine, char separator){

    std::vector<std::string> tokens;

    signed int start, end;

    start = csvLine.find_first_not_of(separator, 0);

    do {

        end = csvLine.find_first_of(separator, start);

        if (start == csvLine.length() || start == end) {
            break;
        }

        if (end >= 0) {
            tokens.push_back(csvLine.substr(start, end - start));
        } else {
            tokens.push_back(csvLine.substr(start, csvLine.length() - start));
        }

        start = end + 1;

    }
    while(end != std::string::npos);

    return tokens;
};
