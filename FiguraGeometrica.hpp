/* Observação: O método virtual void draw recebe, como parâmetro em nosso código, um objeto da classe Sculptor.
*/
#ifndef FIGURAGEOMETRICA_HPP
#define FIGURAGEOMETRICA_HPP
#include "sculptor2.hpp"

class FiguraGeometrica
{
protected:                                         // Parte protegida
 float r, g, b, a;                                // Cores e transparência.

public:                                          // Parte pública

 FiguraGeometrica();                            // Construtor da Classe
  virtual ~FiguraGeometrica (){};              // Destrutor Virtual
  virtual void draw (Sculptor &t) = 0;        // Responsável pelos desenhos das formas geométricas. 
};
#endif  // FIGURAGEOMETRICA_HPP