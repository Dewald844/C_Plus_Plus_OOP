#include <iostream>

void printMenu () {
    std::cout << "+ ----------------------------- +" << std::endl;
    std::cout << "|            Main menu          |" << std::endl;
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

void handleUserChoice(int userChoice) {
    switch (userChoice) {
        case 1:
            std::cout << "Help: " << std::endl;
            break;
        case 2:
            std::cout << "Exchange rates: " << std::endl;
            break;
        case 3:
            std::cout << "Make a offer: " << std::endl;
            break;
        case 4:
            std::cout << "Make a bid: " << std::endl;
            break;
        case 5:
            std::cout << "Print wallet: " << std::endl;
            break;
        case 6:
            std::cout << "Next time slice: " << std::endl;
            break;
        case 7:
            std::cout << "Goodbye " << std::endl;
            break;
        default:
            std::cout << "Invalid choice" << std::endl;
            break;
    }
    std::cout << std::endl;
}

// Main function
int main () {

    int userChoice;

    while(userChoice != 7) {

        printMenu();

        std::cout << "Please Select a number: ";
        std::cout << std::endl;

        std::cin >> userChoice;

        handleUserChoice(userChoice);
    }


    return 0;
}