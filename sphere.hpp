#ifndef SPHERE_HPP
#define SPHERE_HPP
#include "sculptor2.hpp"
#include "FiguraGeometrica.hpp"

class PutSphere : public FiguraGeometrica{
 int xcenter,ycenter,zcenter,radius;
 float r,g,b,a;
public:
  PutSphere(int xcenter,int ycenter,int zcenter,int radius,float r,float g,float b,float a);
  void draw(Sculptor &t);
};
#endif
