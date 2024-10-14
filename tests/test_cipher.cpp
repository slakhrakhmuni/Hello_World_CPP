#include "Cipher.h"
#include <cassert>
#include <iostream>

void test_encryption_decryption() {
    std::string plaintext = "Test Message!";
    std::vector<int> gamma = Cipher::generateGamma(plaintext.length());

    std::string encrypted_text = Cipher::encrypt(plaintext, gamma);
    std::string decrypted_text = Cipher::decrypt(encrypted_text, gamma);

    assert(plaintext == decrypted_text);  // Ensure decryption matches original
    std::cout << "Encryption/Decryption test passed!" << std::endl;
}

int main() {
    test_encryption_decryption();
    return 0;
}

