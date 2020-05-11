#ifndef PlanteC_CPP
#define PlanteC_CPP

#include <iostream>
#include "PlanteC.h"

/*    int _ennui; int _fatigue; int _faim; std::string _nom; */
  

    void PlanteC::tailler(){ 
        _couper-=10;
        if(_couper<0) _couper+=1;
    }
    
    void PlanteC::engrais(int litre){  
        _maturite-=litre;
        _maturite+=10;
        if(_maturite>100) _maturite=0;
    }
    
    void PlanteC::arroser(){   
         _hydrate+=10;
        if(_hydrate>50) _hydrate=0;
        _maturite+=10;
        if(_maturite>100) _maturite=0;
    }
    
    void PlanteC::dormir(){   
        _journee +=1;
        _taille +=10;
        _hydrate -=10;
    }
    
    void PlanteC::giveMouche(){   
        _mouche +=1;
    }
    
    void PlanteC::afficher(){
        std::cout << _nom << " est une plante Carnivore, elle a une maturité de : " << _maturite << "/100 est tailler : " << _couper 
        << "/100 est arroser : " << _hydrate  << "/100, a manger une mouche :  " << _mouche << " /1"<< std::endl;
    }
    
    PlanteC::PlanteC(std::string name) : _nom(name), _maturite(0), _couper(0), _hydrate(0)  {}

#endif