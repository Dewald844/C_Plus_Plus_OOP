#include "MerkelMain.h"

#include <iostream>
#include <vector>

MerkelMain::MerkelMain() {}

void MerkelMain::init(){
    std::cout << "Welcome to Merkel Trading App" << std::endl;

    loadOrderbook();
    int userInput;
    while(true){
        printMenu();
        userInput = getUserChoice();
        userChoiceHandler(userInput);
        if(userInput == 7){
            break;
        }
    }
}

void MerkelMain::loadOrderbook() {
    std::cout << "Loading orderbook" << std::endl;
    orderBook.push_back(
        OrderBookEntry(
            OrderBookType::Ask,
            "2020-01-01 10:00:00",
            "BTC",
            1.0,
            10000.0
        )
    );
}

void MerkelMain::printMenu () {
    std::cout << "+ ----------------------------- +" << std::endl;
    std::cout << "|           Main menu           |" << std::endl;
    std::cout << "+ ----------------------------- +" << std::endl;
    std::cout << "|     1 : Print help            |" << std::endl;
    std::cout << "|     2 : Print exhange rates   |" << std::endl;
    std::cout << "|     3 : Make a offer          |" << std::endl;
    std::cout << "|     4 : Make a bid            |" << std::endl;
    std::cout << "|     5 : Print wallet          |" << std::endl;
    std::cout << "|     6 : Next time slice       |" << std::endl;
    std::cout << "|     7 : Exit                  |" << std::endl;
    std::cout << "+ ----------------------------- +" << std::endl;
    std::cout << std::endl;
}

int MerkelMain::getUserChoice() {
    int userChoice;
    std::cout << "Please Select a number: ";
    std::cin >> userChoice;
    return userChoice;
}

void MerkelMain::printHelp() {
    std::cout << "Help - your aim is to make money." << std::endl;
    std::cout << "Analyse the market and make bids" << std::endl;
    std::cout << "and offers. " << std::endl;
}

void MerkelMain::printExchangeRates() {
    std::cout << "Exchange rates: " << orderBook.size() << std::endl;

}

void MerkelMain::makeOffer() {
    std::cout << "Make a offer: " << std::endl;
}

void MerkelMain::placeBid() {
    std::cout << "Make a bid: " << std::endl;
}

void MerkelMain::printWallet() {
    std::cout << "Print wallet: " << std::endl;
}

void MerkelMain::advanceToNextTimeSlice() {
    std::cout << "Next time slice: " << std::endl;
}

void MerkelMain::exitProgram() {
    std::cout << "Goodbye " << std::endl;
}

void MerkelMain::userChoiceHandler(int userChoice) {
    switch (userChoice) {
        case 1:
            printHelp();
            break;
        case 2:
            printExchangeRates();
            break;
        case 3:
            makeOffer();
            break;
        case 4:
            placeBid();
            break;
        case 5:
            printWallet();
            break;
        case 6:
            advanceToNextTimeSlice();
            break;
        case 7:
            exitProgram();
            break;
        default:
            std::cout << "Invalid choice" << std::endl;
    }
}