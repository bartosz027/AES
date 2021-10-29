#include <iostream>
#include <string>

#include "AES/AES.h"

int main(int argc, char* argv[]) {
    std::string secret, secret_revealed;

    try {
        secret = Encryption::AES::Encrypt("TEST MESSAGE!", "PASSWORD");
        secret_revealed = Encryption::AES::Decrypt(secret, "PASSWORD");

        std::cout << "======================================================== TEST 1 ========================================================\n";
        std::cout << "ENCRYPTED:\n" << secret << "\n\n";
        std::cout << "DECRYPTED:\n" << secret_revealed << "\n\n";

        secret = Encryption::AES::Encrypt("LONGER TEST MESSAGE!", "PASSWORD");
        secret_revealed = Encryption::AES::Decrypt(secret, "PASSWORD");

        std::cout << "======================================================== TEST 2 ========================================================\n";
        std::cout << "ENCRYPTED:\n" << secret << "\n\n";
        std::cout << "DECRYPTED:\n" << secret_revealed << "\n\n";
    }
    catch (const char* error) {
        std::cout << error << std::endl;
    }

    return 0;
}