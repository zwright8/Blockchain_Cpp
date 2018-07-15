//
// Created by Zach Wright on 5/3/18.
//

#ifndef BLOCKCHAIN_BLOCK_H
#define BLOCKCHAIN_BLOCK_H

#include <cstdint>
#include <iostream>
#include <sstream>

using namespace std;

class Block {
public:
    string sHash;
    string sPrevHash;

    Block(uint32_t nIndexIn, const string &sDataIn);

    void MineBlock(uint32_t nDifficulty);

private:
    string _sData;
    time_t _tTime;
    uint32_t _nIndex;
    uint32_t _nNonce;

    string _GetHash() const;
};

#endif //BLOCKCHAIN_BLOCK_H
