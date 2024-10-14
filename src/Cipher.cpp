#include "Cipher.h"
#include <iostream>

std::vector<int> Cipher::generateGamma(int length) {
    std::vector<int> gamma(length);
    for (int i = 0; i < length; ++i) {
        gamma[i] = rand() % 256;  // Generate random values for gamma
    }
    return gamma;
}

std::string Cipher::encrypt(const std::string& plaintext, const std::vector<int>& gamma) {
    std::string ciphertext = plaintext;
    for (size_t i = 0; i < plaintext.length(); ++i) {
        ciphertext[i] = plaintext[i] ^ gamma[i % gamma.size()];  // XOR operation
    }
    return ciphertext;
}

std::string Cipher::decrypt(const std::string& ciphertext, const std::vector<int>& gamma) {
    std::string decrypted_text = ciphertext;
    for (size_t i = 0; i < ciphertext.length(); ++i) {
        decrypted_text[i] = ciphertext[i] ^ gamma[i % gamma.size()];  // XOR operation
    }
    return decrypted_text;
}

