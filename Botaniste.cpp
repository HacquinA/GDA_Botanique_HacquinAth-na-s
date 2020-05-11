#ifndef BOTANISTE_CPP
#define BOTANISTE_CPP

#include <string>
#include "Botaniste.h"
#include "Plante.h"

// std::string _playerName;
  
  
    void Botaniste::ciseler(Plante * cible){
        cible->tailler();
    }
    
    void Botaniste::abreuve(Plante * cible){
        cible->arroser();
    }
    
    void Botaniste::fertiliser(Plante * cible){
        cible->engrais(1);    
    }
    
    void Botaniste::dormir(Plante * cible){
       cible->dormir();
    }
    
    void Botaniste::acheterPlante(){
        _argent -=50;
        _pousse +=1;
    }
    
    void Botaniste::acheterEngrais(){
        _argent -=10;
        _liquide +=1;
    }
    
    void Botaniste::vendre(){
        _argent +=50;
        _planteSell -=1;
    }
    
    Botaniste::Botaniste(std::string nomBotaniste): _botanisteName(nomBotaniste) {}
    
#endif