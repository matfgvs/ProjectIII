#include "putVoxel.hpp"
#include <iostream>

PutVoxel::PutVoxel(int x0,int y0,int z0,float r,float g,float b,float a)
{
 this->x=x0;
 this->y=y0;
 this->z=z0;
 
 this->r=r;
 this->g=g;
 this->b=b;
 this->a=a;
}

void PutVoxel::draw(Sculptor &t)
{
  t.setColor(r,g,b,a);
  t.putVoxel(x,y,z);
}