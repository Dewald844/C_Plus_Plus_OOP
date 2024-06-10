#include "OrderBookEntry.h"
#include <string>

OrderBookEntry::OrderBookEntry(
    OrderBookType orderType,
    std::string timestamp,
    std::string product,
    double amount,
    double price
):
    orderType(orderType),
    timestamp(timestamp),
    product(product),
    amount(amount),
    price(price) {}