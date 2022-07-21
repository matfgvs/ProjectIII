#ifndef SCULPTOR2_HPP
#define SCULPTOR2_HPP
/* Classe Sculptor Reserva */

#include "voxel.hpp"

class Sculptor 
{
 private:
  Voxel ***v;                         // 3D matrix - Matriz 3D
  int nx,ny,nz;                      // Dimensions - 3 Dimensões da Matriz
  float r,g,b,a;                     // Current drawing color - Cores atuais do desenho e Transparência
  
  public:
  Sculptor(int _nx, int _ny, int _nz);

  ~Sculptor();

  void setColor(float r, float g, float b, float alpha);

  void putVoxel(int x, int y, int z);

  void cutVoxel(int x, int y, int z); 

  void writeOFF(const char* filename);
};
#endif
 // SCULPTOR_HPP