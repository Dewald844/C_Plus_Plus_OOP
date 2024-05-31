#include <string>
#include <vector>

enum OrderBookType {Bid, Ask};

class OrderBookEntry {
   public:

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