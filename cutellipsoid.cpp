#include "cutellipsoid.hpp"
#include <iostream>
#include <cmath>

CutEllipsoid::CutEllipsoid(int xcenter,int ycenter,int zcenter,int rx,int ry,int rz)
{
 this->xcenter=xcenter;
 this->ycenter=ycenter;
 this->zcenter=zcenter;
 this->rx=rx;
 this->ry=ry;
 this->rz=rz;
}

void CutEllipsoid::draw(Sculptor &t)
{
  float SegX, SegY, SegZ;
  for(int i = (xcenter - rx);i < (xcenter + rx);i++)
  {
    for(int j = (ycenter - ry);j < (ycenter + ry);j++)
    {
      for(int k = (zcenter - rz);k < (zcenter + rz);k++)
      {
        SegX= pow(i-xcenter,2) / pow (rx,2);
        SegY= pow(j-ycenter,2) / pow (ry,2);
        SegZ= pow(k-zcenter,2) / pow (rz,2);
        if((SegX + SegY + SegZ)<=1)
        {
          t.cutVoxel(i,j,k);
        }
      }
    }
  }
}