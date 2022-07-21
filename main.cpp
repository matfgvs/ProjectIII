#include <cstdlib>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <string>
#include <vector>
#include "FiguraGeometrica.hpp"
#include "box.hpp"
#include "cutVoxel.hpp"
#include "cutbox.hpp"
#include "cutellipsoid.hpp"
#include "cutsphere.hpp"
#include "ellipsoid.hpp"
#include "putVoxel.hpp"
#include "sphere.hpp"

 


    int main(void) 
{
  std::ifstream fin;
  std::string s;
  std::vector<FiguraGeometrica *> figs;
  std::vector<FiguraGeometrica *>::iterator it;
  FiguraGeometrica *f;
  int nx, ny, nz;
  int rx, ry, rz;
  int x0, x1, y0, y1, z0, z1, radius;
  int xcenter, ycenter, zcenter;
  float r, g, b, a;

  fin.open("arquivo.txt");

  while (fin.good()) 
  {
    fin >> s;

    if (s.compare("dim") == 0) 
    {
      fin >> nx >> ny >> nz;
    }

    else if (s.compare("putvoxel") == 0) 
    {
      fin >> x0 >> y0 >> z0 >> r >> g >> b >> a;
      figs.push_back(new PutVoxel(x0, y0, z0, r, g, b, a));
    }

    else if (s.compare("cutvoxel") == 0)
    {
      fin >> x0 >> y0 >> z0;
      figs.push_back(new CutVoxel(x0, y0, z0));
    }

    else if (s.compare("putbox") == 0)
    {
      fin >> x0 >> x1 >> y0 >> y1 >> z0 >> z1 >> r >> g >> b >> a;
      figs.push_back(new PutBox(x0, x1, y0, y1, z0, z1, r, g, b, a));
    }

    else if (s.compare("cutbox") == 0)
    {
      fin >> x0 >> x1 >> y0 >> y1 >> z0 >> z1;
      figs.push_back(new CutBox(x0, x1, y0, y1, z0, z1));
    }

    else if (s.compare("putsphere") == 0) 
    {
      fin >> xcenter >> ycenter >> zcenter >> radius >> r >> g >> b >> a;
      figs.push_back(
          new PutSphere(xcenter, ycenter, zcenter, radius, r, g, b, a));
    }

    else if (s.compare("cutsphere") == 0) 
    {
      fin >> xcenter >> ycenter >> zcenter >> radius;
      figs.push_back(new CutSphere(xcenter, ycenter, zcenter, radius));
    }

    else if (s.compare("putellipsoid") == 0) {
      fin >> xcenter >> ycenter >> zcenter >> rx >> ry >> rz >> r >> g >> b >> a;
      figs.push_back(
          new PutEllipsoid(xcenter, ycenter, zcenter, rx, ry, rz, r, g, b, a));
    }

    else if (s.compare("cutellipsoid") == 0) {
      fin >>  xcenter >> ycenter >> zcenter >> rx >> ry >> rz;
      figs.push_back(new CutEllipsoid(xcenter, ycenter, zcenter, rx, ry, rz));
    }
     std::cout << "leu " << s << std::endl;
  }
  fin.close();

  Sculptor *t = new Sculptor (nx, nz, ny);
  for (auto it = figs.cbegin(); it != figs.cend(); it++)
  {
    (*it)->draw(*t);
  }
  t->writeOFF("BarquinhoIII.off");
      delete t;
}