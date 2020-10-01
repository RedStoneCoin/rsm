//Copyright © 2020 Toni Dumancic and RedStone developers
#include "Block.h"
#include "sha256.h"
Block::Block(uint32_t nIndexIn, const string& sDataIn) : _nIndex(nIndexIn), _sData(sDataIn) {
    _nNonce = -1;
    _tTime = time(nullptr);
}