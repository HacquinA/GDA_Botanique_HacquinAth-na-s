#ifndef FLEUR_H
#define FLEUR_H

#include <string>

class Fleur{
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
    
    Fleur(std::string name);
    
};

#endif