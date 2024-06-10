#include <iostream>
#include <vector>
#include <map>
#include <string>

#include "MerkelMain.h"
#include "OrderBookEntry.h"

std::vector<OrderBookEntry> orders;

// Main function
int main () {
    MerkelMain merkelMain;
    merkelMain.init();
    int userChoice;
    merkelMain.printMenu();
    userChoice = merkelMain.getUserChoice();
    merkelMain.userChoiceHandler(userChoice);

    //orders.push_back(OrderBookEntry( OrderBookType::Bid, "2017-11-01 14:48:01.123", "ETH/BTC", 0.01, 1000));
    return 0;
}