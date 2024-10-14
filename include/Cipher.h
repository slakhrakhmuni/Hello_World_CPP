#ifndef CIPHER_H
#define CIPHER_H

#include <string>
#include <vector>

class Cipher {
public:
    static std::vector<int> generateGamma(int length);
    static std::string encrypt(const std::string& plaintext, const std::vector<int>& gamma);
    static std::string decrypt(const std::string& ciphertext, const std::vector<int>& gamma);
};

#endif

