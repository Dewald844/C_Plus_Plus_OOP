#pragma once
#include <iostream>
#include "OrderBookEntry.h"
#include <vector>

class MerkelMain {
    public:
        MerkelMain();
        void init();

    private :
        void loadOrderbook();
        void printHelp();
        void printExchangeRates();
        void makeOffer();
        void placeBid();
        void printWallet();
        void advanceToNextTimeSlice();
        void exitProgram();
        int getUserChoice();
        void printMenu();
        void userChoiceHandler(int userChoice);

        std::vector<OrderBookEntry> orderBook;
};