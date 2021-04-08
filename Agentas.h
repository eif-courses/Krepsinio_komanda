//
// Created by Gediminas on 2021-03-25.
//
#ifndef KREPSINIO_KOMANDA_AGENTAS_H
#define KREPSINIO_KOMANDA_AGENTAS_H
#include "ASMUO.h"
#include "Vadybininkas.h"
#include "RungtyniuTvarkarastis.h"
#include "Treneris.h"


class Agentas : public ASMUO {
public:
    Agentas(const string &vardas, const string &pavarde, int amzius);
    void Info();
//void IdetiInformacija(RungtyniuTvarkarastis rungtyniuTvarkarastis);

   // {
     //   cout<<"Agentas"<< vardas<<" miestas: "<< pavarde<< endl;
   // }
    void IdetiInformacija(Vadybininkas vadybininkas);
    void Meniu(Vadybininkas vadybininkas);



//private:

   // void IdetiInformacija();
   // void Meniu();
};


#endif //KREPSINIO_KOMANDA_AGENTAS_H

