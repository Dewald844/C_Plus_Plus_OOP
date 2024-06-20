#pragma once
#include <string>
#include <vector>

enum OrderBookType {Bid, Ask, Unknown};

class OrderBookEntry {
   public:

        static OrderBookType parseOrderType (const std::string& s);

        OrderBookEntry(
            OrderBookType orderType,
            std::string timestamp,
            std::string product,
            double amount,
            double price
        );

        OrderBookType orderType;
        std::string timestamp;
        std::string product;
        double amount;
        double price;
};