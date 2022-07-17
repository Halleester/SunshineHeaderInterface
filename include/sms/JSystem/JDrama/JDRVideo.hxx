#pragma once

#include <dolphin/types.h>
#include <dolphin/GX.h>

namespace JDrama {

class TVideo {
public:
  TVideo();

  void setNextXFB(const void *);
  void waitForRetrace(u16);

  GXRenderModeObj _0;
  GXRenderModeObj _3C;
  u32 _78;
  void *mNextFB;     // 7C
  s32 mTicks;        // 80
  s32 mRetraceCount; // 84
};

}