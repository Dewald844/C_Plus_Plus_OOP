#include <iostream>
#include <map>
class MerkelMain {
    public:
        MerkelMain();
        void init();
        int getUserChoice();
        void printMenu();
        void userChoiceHandler(int userChoice);

    private :

        void printHelp();
        void printExchangeRates();
        void makeOffer();
        void placeBid();
        void printWallet();
        void advanceToNextTimeSlice();
        void exitProgram();

};