#include <fstream>
#include <vector>

#include "Encoder.h"

using namespace std;

bool Encoder::encrypt(const string& pathNameIn, const string& pathNameOut) {
    try {
        vector<unsigned char> data = readFromFile(pathNameIn);
        vector<unsigned char> encryptedData = encrypt_data(data);
        writeToFile(pathNameOut, encryptedData);
    } catch (const exception& ex) {
        cout << ex.what() << '\n';
        return false;
    }
    return true;
}

bool Encoder::decrypt(const string& pathNameIn, const string& pathNameOut) {
    try {
        vector<unsigned char> data = readFromFile(pathNameIn);
        vector<unsigned char> decryptedData = decrypt_data(data);
        writeToFile(pathNameOut, decryptedData);
    } catch (const exception& ex) {
        cout << ex.what() << '\n';
        return false;
    }
    return true;
}

vector<unsigned char> Encoder::encrypt_data(const vector<unsigned char>& data) {
    vector<unsigned char> res;
    
    key = generateKey();
    aesAlg = AES(key);
    for (size_t i = 0; i < data.size()/16; ++i) {
        string DATA = getBlock(i, data);
        string encryptedBlockInString = aesAlg.encrypt(DATA);
        vector<unsigned char> encryptedBlockInUnsignedChar(encryptedBlockInString.begin(), encryptedBlockInString.end());
        res.insert(res.end(), encryptedBlockInUnsignedChar.begin(), encryptedBlockInUnsignedChar.end());
        
    }
    return res;
}

vector<unsigned char> Encoder::decrypt_data(const vector<unsigned char>& data) {
    vector<unsigned char> res;
    aesAlg = AES(key);
    
    for (size_t i = 0; i < data.size()/16; ++i) {
        string DATA = getBlock(i, data);
        string decryptedBlockInString = aesAlg.decrypt(DATA);
        vector<unsigned char> decryptedBlockInUnsignedChar(decryptedBlockInString.begin(), decryptedBlockInString.end());
        res.insert(res.end(), decryptedBlockInUnsignedChar.begin(), decryptedBlockInUnsignedChar.end());
    }
    return res;
}

void Encoder::setKey(const string& key) {
    this->key = key;
}


string Encoder::getBlock(const size_t& i, const vector<unsigned char>& data) {
    if ((i+1) * 16 < data.size()) {
        string DATA(data.begin() + i * 16, data.begin() + (i+1) * 16);
        return DATA;
    } else {
        string DATA(data.begin() + i * 16, data.end());
        return DATA;
    }
}


string Encoder::generateKey() {
    string key = "";
    for (int i = 0; i < 16; ++i) {
        key += char(rand()%128-1);
    }
    return key;
}

vector<unsigned char> Encoder::readFromFile(const string& pathNameIn) {
    ifstream file(pathNameIn, ios::in | ios::binary);
    if (!file) {
        //cout << "File can not open\n";
        throw "File can not open\n";
    }
    
    std::stringstream ss;
    ss << file.rdbuf();
    string fileData = ss.str();
    
    vector<unsigned char> data(fileData.begin(), fileData.end());
    while (data.size() % 16 != 0) {
        data.push_back('0');
    }
    file.close();
    return data;
}

void Encoder::writeToFile(const string& pathNameOut, const vector<unsigned char>& data) {
    string dataInString(data.begin(), data.end());
    ofstream fout(pathNameOut);
    deleteLastZeroes(dataInString);
    fout << dataInString;
    fout.close();
}

void Encoder::deleteLastZeroes(string &data) {
    while (data.length() > 0 && data[data.size()-1] == '0') {
        data.pop_back();
    }
}
