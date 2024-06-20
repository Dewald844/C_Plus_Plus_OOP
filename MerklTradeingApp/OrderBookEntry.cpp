#include "OrderBookEntry.h"
#include <string>

OrderBookEntry::OrderBookEntry(
    OrderBookType orderType,
    std::string timestamp,
    std::string product,
    double price,
    double amount

):
    orderType(orderType),
    timestamp(timestamp),
    product(product),
    amount(amount),
    price(price) {}

OrderBookType OrderBookEntry::parseOrderType(const std::string& s) {
    if (s == "bid") {
        return OrderBookType::Bid;
    } else if (s == "ask") {
        return OrderBookType::Ask;
    } else {
        return OrderBookType::Unknown;
    }
}