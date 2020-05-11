#ifndef BOTANISTE_H
#define BOTANISTE_H

#include <string>
#include "Plante.h"

class Botaniste{
  private:
    
    int _fatigue;
    int _argent;
    int _pousse;
    int _planteSell;
    int _liquide;
  
    std::string _botanisteName;
    
  
  public:
  
    void ciseler(Plante * cible);
    void abreuve(Plante * cible);
    void fertiliser(Plante * cible);
    void dormir(Plante * cible);
    void acheterPlante();
    void acheterEngrais();
    void vendre();
    
    
    Botaniste(std::string nomBotaniste);
    
};

#endif