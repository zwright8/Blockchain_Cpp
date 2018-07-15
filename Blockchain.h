//
// Created by Zach Wright on 5/3/18.
//

#ifndef BLOCKCHAIN_BLOCKCHAIN_H
#define BLOCKCHAIN_BLOCKCHAIN_H

#include <cstdint>
#include <vector>
#include "Block.h"

using namespace std;

class CreateBlockchain {
public:
    CreateBlockchain();

    void AddBlock(Block bNew);

private:
    uint32_t _nDifficulty;
    vector<Block> _vChain;

    Block _GetLastBlock() const;
};

#endif //BLOCKCHAIN_BLOCKCHAIN_H
