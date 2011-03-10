#include "Julia.h"

Julia::Julia(const Point& computationPoint)
  : computationPoint_(computationPoint)
{
}

void Julia::computeNewZ(double& Z_re, double& Z_im, double /*c_re*/, double /*c_im*/) const
{
  // Julia set
  // Z(0) = c
  // Z(n+1) = Z(n)^2 + K
  double Z_im2 = Z_im*Z_im;
  Z_im = 2*Z_re*Z_im + computationPoint_.y();
  Z_re = Z_re*Z_re - Z_im2 + computationPoint_.x();
}

