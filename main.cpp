#include "ProtonConsumer.h"
#include <iostream>

int main(int, char**) {
    std::string     strProtonURI = "127.0.0.1/COMMAND.IN";
    std::cout << "Hello, world!\n";
    ProtonConsumer pProtonConsumer(strProtonURI);
}
