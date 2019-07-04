#include <iostream>
#include <vector>
#include <string>
#include <fstream>

#include "Encoder.h"

using namespace std;

string getInformationFromFile(const string& path) {
    ifstream file(path);
    if (!file) {
        cout << "File can not open\n";
        exit(0);
    }
    std::stringstream ss;
    ss << file.rdbuf();
    string info = ss.str();
    file.close();
    return info;
}

bool check(const string& path1, const string& path2) {
    return getInformationFromFile(path1) == getInformationFromFile(path2);
}

int main(int argc, char *argv[]) {
    Encoder encoder;
    if (argc != 4) {
        std::cout << "Error\n";
        exit(0);
    }
    bool encryptFlag = encoder.encrypt(argv[1], argv[2]);
    if (encryptFlag) {
        cout << "Encrypt was successful\n";
    }
    
    bool decryptFlag = encoder.decrypt(argv[2], argv[3]);
    if (decryptFlag) {
        cout << "Decrypt was successful\n";
    }
    
    if (encryptFlag && decryptFlag && check(argv[1], argv[3])) {
        cout << "Decrypt was correct\n";
    } else {
        cout << "Decrypt was not correct\n";
    }
    
    return 1;
}
