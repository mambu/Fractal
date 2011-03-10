#include "Mandelbrot.h"

void Mandelbrot::computeNewZ(double& Z_re, double& Z_im, double c_re, double c_im) const
{
  // Mandelbrot set
  // Z(0) = c
  // Z(n+1) = Z(n)^2 + c
  double Z_im2 = Z_im*Z_im;
  Z_im = 2*Z_re*Z_im + c_im;
  Z_re = Z_re*Z_re - Z_im2 + c_re;
}
