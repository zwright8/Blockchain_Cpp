//
// Created by Zach Wright on 5/3/18.
//

#include "Blockchain.h"

CreateBlockchain::CreateBlockchain()
{
    _vChain.emplace_back(Block(0, "Genesis Block"));
    _nDifficulty = 5;
}

void CreateBlockchain::AddBlock(Block bNew)
{
    bNew.sPrevHash = _GetLastBlock().sHash;
    bNew.MineBlock(_nDifficulty);
    _vChain.push_back(bNew);
}

Block CreateBlockchain::_GetLastBlock() const
{
    return _vChain.back();
}