#ifndef PUTVOXEL.HPP
#define PUTVOXEL.HPP
#include "sculptor2.hpp"
#include "FiguraGeometrica.hpp"

class PutVoxel : public FiguraGeometrica
{
 int x,y,z;
 float r,g,b,a;
 public:
 PutVoxel(int x,int y,int z,float r,float g,float b,float a);
 void draw(Sculptor &t);
};

#endif // PUTVOXEL_HPP
//figs.pushback(new PutVoxel (x,y,z,r,g,b,a));
//figs.pushback(new PutVoxel (x,y,z,r,g,b,a));