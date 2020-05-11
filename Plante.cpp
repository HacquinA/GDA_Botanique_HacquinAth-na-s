#ifndef Plante_CPP
#define Plante_CPP

#include <iostream>
#include "Plante.h"

/*    int _ennui; int _fatigue; int _faim; std::string _nom; */
  

    void Plante::tailler(){ 
        _couper+=10;
        if(_couper<0) _couper+=1;
    }
    
    void Plante::engrais(int litre){  
        _maturite-=litre;
        _maturite+=10;
        if(_maturite>100) _maturite=0;
    }
    
    void Plante::arroser(){   
         _hydrate+=10;
        if(_hydrate>50) _hydrate=0;
        _maturite+=10;
        if(_maturite>100) _maturite=0;
    }
    
    void Plante::dormir(){   
        _journee +=1;
        _taille +=10;
        _hydrate -=10;
    }
    
    void Plante::afficher(){
        std::cout << _nom << " est une plante, elle a une maturité de : " << _maturite << "/100 est tailler : " << _couper 
        << "/100 est arroser : " << _hydrate  << "/100. " << std::endl;
    }
    
    Plante::Plante(std::string name) : _nom(name), _maturite(0), _couper(0), _hydrate(0)  {}

#endif