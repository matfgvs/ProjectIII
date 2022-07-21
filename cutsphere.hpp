#ifndef CUTSPHERE_HPP
#define CUTSPHERE_HPP
#include "sculptor2.hpp"
#include "FiguraGeometrica.hpp"

class CutSphere : public FiguraGeometrica
{
 int xcenter,ycenter,zcenter,radius;
 public:
 CutSphere(int xcenter,int ycenter,int zcenter,int radius);
 void draw(Sculptor &t);
};
#endif
