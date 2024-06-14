#include "CSVReader.h"

#include <string>
#include <vector>
#include <iostream>
#include <fstream>

//CSVReader::CSVReader();

std::vector<OrderBookEntry> CSVReader::readCSV(std::string csvFilePath) {

    std::vector<OrderBookEntry> orderBook;
    std::ifstream file(csvFilePath);
    std::string line;

    if (file.is_open()) {
        while (std::getline(file, line)){
            try {
                orderBook.push_back(
                    CSVReader::createOrderBookEntry(
                        CSVReader::tokenise(line, ',')
                    )
                );
            } catch (const std::exception e) {
                std::cout << "Error: invalid argument : " << e.what() << std::endl;
            }
        }
    }

    return orderBook;
};

OrderBookEntry CSVReader::createOrderBookEntry(std::vector<std::string> lineTokens) {
    if (lineTokens.size() != 5) {
        std::cout << "Error: expected 5 tokens, found " << lineTokens.size() << std::endl;
        throw;
    } else {
        return OrderBookEntry(
            // create constructor method in order book entry class
            lineTokens[2] == "bid" ? OrderBookType::Bid : OrderBookType::Ask,
            lineTokens[0],
            lineTokens[1],
            std::stod(lineTokens[3]),
            std::stod(lineTokens[4])
        );
    }
};

std::vector<std::string> CSVReader::tokenise(std::string csvLine, char separator){

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
