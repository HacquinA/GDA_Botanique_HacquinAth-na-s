#ifndef PLANTEC_H
#define PLANTEC_H

#include <string>

class PlanteC{
  protected:
  
    int _maturite;
    int _couper;
    int _hydrate;
    int _journee;
    int _taille;
    int _mouche;
    std::string _nom;
  
  public:
  
    void virtual tailler();
    void virtual engrais(int litre);
    void virtual arroser();
    void virtual dormir();
    void virtual giveMouche();
    
    void afficher();
    
    PlanteC(std::string name);
    
};

#endif