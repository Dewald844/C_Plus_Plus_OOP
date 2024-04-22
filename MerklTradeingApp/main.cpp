#include <iostream>
#include <map>

enum OrderType {Bid, Ask};

class Order {
    public:
        OrderType Type;
        std::string DateTime;
        std::string Product;
        double Amount;
        double Price;
};

void printMenu () {
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

int getUserChoice() {
    int userChoice;
    std::cout << "Please Select a number: ";
    std::cin >> userChoice;
    return userChoice;
}

void printHelp() {
    std::cout << "Help - your aim is to make money." << std::endl;
    std::cout << "Analyse the market and make bids" << std::endl;
    std::cout << "and offers. " << std::endl;
}

void printExchangeRates() {
    std::cout << "Exchange rates: " << std::endl;
}

void makeOffer() {
    std::cout << "Make a offer: " << std::endl;
}

void placeBid() {
    std::cout << "Make a bid: " << std::endl;
}

void printWallet() {
    std::cout << "Print wallet: " << std::endl;
}

void advanceToNextTimeSlice() {
    std::cout << "Next time slice: " << std::endl;
}

void exitProgram() {
    std::cout << "Goodbye " << std::endl;
}

void printUserChoice (int userChoice) {
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
            printMenu();
            break;
    }
}

//Build Map of function pointers
std::map<int,void(*)()> userChoiceHandler () {
    std::map<int, void(*)()> outputMap;
    outputMap[0] = printMenu;
    outputMap[1] = printHelp;
    outputMap[2] = printExchangeRates;
    outputMap[3] = makeOffer;
    outputMap[4] = placeBid;
    outputMap[5] = printWallet;
    outputMap[6] = advanceToNextTimeSlice;
    outputMap[7] = exitProgram;
    return outputMap;
}

// Main function
int main () {

    int userChoice;

    while(userChoice != 7) {

        printMenu();
        userChoice = getUserChoice();
        userChoiceHandler()[userChoice]();

    }


    return 0;
}