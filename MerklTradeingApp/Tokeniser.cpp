#include <string>
#include <vector>
#include <iostream>
#include <fstream>

std::vector<std::string> tokenise(std::string csvLine, char separator){

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

int main () {

    std::vector<std::string> tokens;

    std::ifstream file("data.csv");

    std::string line;

    if (file.is_open()) {
        while (getline(file, line)) {
            std::cout << "Parsing line" << line << std::endl;
            tokens = tokenise(line, ',');
            if (tokens.size() != 5) {
                cout << "Error: expected 5 tokens, found " << tokens.size() << endl;
            }

            double price = std::stod(tokens[3]);
            double amount = std::stod(tokens[4]);

        }
        file.close();
    }

    return 0;
}