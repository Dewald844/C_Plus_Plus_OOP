#pragma once
#include "OrderBookEntry.h"
#include "CSVReader.h"
#include <string>
#include <vector>

class Orderbook {
    public:
        Orderbook(std::string filename);
        std::vector<std::string> getknownProducts();
        std::vector<OrderBookEntry> getOrders(
            OrderBookType type
            , std::string product
            , std::string timeStamp
        );

    private:
        std::vector<OrderBookEntry> orders;
}
