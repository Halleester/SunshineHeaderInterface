#pragma once

#include <dolphin/types.h>
#include <dolphin/GX.h>

#include "JPADataBlock.hxx"
#include "JKR/JKRHeap.hxx"
#include "JUT/JUTTexture.hxx"

class JPATexture : public JPADataBlock {
public:
    JPATexture(u8 *data, JKRHeap *heap);
    virtual ~JPATexture();

    JUTTexture mTexture;
};