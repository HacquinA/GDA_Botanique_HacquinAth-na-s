#include <iostream>
#include "Plante.h"
#include "Fleur.h"
#include "PlanteC.h"
#include "Botaniste.h"


int main()
{
    
    Plante * rose = new Plante("Rose");
    rose->afficher();
    PlanteC * jackie = new PlanteC("Jackie");
    jackie->afficher();
    
    Botaniste * athe = new Botaniste("Athe");
    
    athe-> ciseler(rose);
    athe-> fertiliser(rose);
    athe-> abreuve(rose);
    rose->afficher();
    
   
    
    
    
    
    return 0;
}
