#ifndef ELLIPSOID_HPP
#define ELLIPSOID_HPP
#include "sculptor2.hpp"
#include "FiguraGeometrica.hpp"

class PutEllipsoid : public FiguraGeometrica
{
 int xcenter,ycenter,zcenter,rx,ry,rz;
 float r,g,b,a;
 public:
 PutEllipsoid(int xcenter,int ycenter,int zcenter,int rx,int ry,int rz,float r,float g,float b,float a);
 void draw(Sculptor &t);
};

#endif // ELLIPSOID
