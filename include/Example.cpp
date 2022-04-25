#include "AES/AES.h"

#include <iostream>
#include <string>

int main(int argc, char* argv[]) {
    std::string encrypted_message, decrypted_message;

    try {
        encrypted_message = Encryption::AES::Encrypt("TEST MESSAGE!", "PASSWORD");
        decrypted_message = Encryption::AES::Decrypt(encrypted_message, "PASSWORD");

        std::cout << "======================================================== TEST 1 ========================================================\n";
        std::cout << "ENCRYPTED:\n" << encrypted_message << "\n\n";
        std::cout << "DECRYPTED:\n" << decrypted_message << "\n\n";

        encrypted_message = Encryption::AES::Encrypt("LONGER TEST MESSAGE!", "PASSWORD");
        decrypted_message = Encryption::AES::Decrypt(encrypted_message, "PASSWORD");

        std::cout << "======================================================== TEST 2 ========================================================\n";
        std::cout << "ENCRYPTED:\n" << encrypted_message << "\n\n";
        std::cout << "DECRYPTED:\n" << decrypted_message << "\n\n";
    }
    catch (const char* error) {
        std::cout << error << std::endl;
    }

    return 0;
}