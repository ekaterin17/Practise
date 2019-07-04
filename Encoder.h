#ifndef Encoder_hpp
#define Encoder_hpp

#include <stdio.h>
#include <iostream>
#include <string>

#include "Encryptions-master/Encryptions/AES.h"
using namespace std;

class Encoder {
public:
    bool encrypt(const string& pathNameIn, const string& pathNameOut);
    bool decrypt(const string& pathNameIn, const string& pathNameOut);
    vector<unsigned char> encrypt_data(const vector<unsigned char>& data);
    vector<unsigned char> decrypt_data(const vector<unsigned char>& data);
    
    void setKey(const string& key);
    
private:
    string key = "";
    AES aesAlg;
    
    string generateKey();
    string getBlock(const size_t& i, const vector<unsigned char>& data);
    void deleteLastZeroes(string& data);
    vector<unsigned char> readFromFile(const string& pathNameIn);
    void writeToFile(const string& pathNameOut, const vector<unsigned char>& data);
};

#endif
