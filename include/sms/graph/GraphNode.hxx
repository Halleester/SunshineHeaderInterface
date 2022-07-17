#pragma once

#include "RailNode.hxx"
#include <dolphin/types.h>
#include <dolphin/MTX.h>

#include "JGeometry.hxx"

class TGraphNode {

public:
  TGraphNode();
  void getPoint(Vec *out) const;

  TVec3s *mPoint;
  u32 _04;
  f32 _08;
  u32 _0C;
};