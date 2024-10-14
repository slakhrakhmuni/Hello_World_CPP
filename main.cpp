#include <iostream>
#include "Cipher.h"

int main() {
    std::string plaintext = "Hello Stream Cipher!";
    std::vector<int> gamma = Cipher::generateGamma(plaintext.length());

    std::string encrypted_text = Cipher::encrypt(plaintext, gamma);
    std::cout << "Encrypted: " << encrypted_text << std::endl;

    std::string decrypted_text = Cipher::decrypt(encrypted_text, gamma);
    std::cout << "Decrypted: " << decrypted_text << std::endl;

    return 0;
}

