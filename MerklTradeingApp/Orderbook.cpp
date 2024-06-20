#include "OrderBook.h"
#include "CSVReader.h"

Orderbook::Orderbook(std::string filename){
    orders = CSVReader::readCSV(filename);
}

std::vector<std::string> Orderbook::getknownProducts(){
    std::vector<std::string> products;
    return products;
}

std::vector<OrderBookEntry> Orderbook::getOrders(
    OrderBookType type
    , std::string product
    , std::string timeStamp
){
    std::vector<OrderBookEntry> orders;
    return orders;
}