#pragma once

#include "OrderBookEntry.h"
#include <vector>
#include <string>

class CSVReader {
    CSVReader();
    public:
        static std::vector<OrderBookEntry> readCSV(std::string csvFilePath);

    private:
        static std::vector<std::string> tokenise(std::string csvLine, char separator);
        static OrderBookEntry createOrderBookEntry(std::vector<std::string> lineTokens);
};