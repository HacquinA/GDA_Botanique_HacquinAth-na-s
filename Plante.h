#ifndef PLANTE_H
#define PLANTE_H

#include <string>

class Plante{
  protected:
  
    int _maturite;
    int _couper;
    int _hydrate;
    int _journee;
    int _taille;
    std::string _nom;
  
  public:
  
    void virtual tailler();
    void virtual engrais(int litre);
    void virtual arroser();
    void virtual dormir();
    
    
    void afficher();
    
    Plante(std::string name);
    
};

#endif