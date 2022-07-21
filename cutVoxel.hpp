#ifndef CUTVOXEL_HPP
#define CUTVOXEL_HPP
#include "sculptor2.hpp"
#include "FiguraGeometrica.hpp"

class CutVoxel : public FiguraGeometrica
{
 int x0,y0,z0;
 public:
 CutVoxel(int x0,int y0,int z0);
 void draw(Sculptor &t);
};
#endif
 // POINT_HPP
//figs.pushback(new PutVoxel (x,y,z,r,g,b,a));
//figs.pushback(new PutVoxel (x,y,z,r,g,b,a));