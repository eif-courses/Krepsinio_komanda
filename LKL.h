//
// Created by Gediminas on 2021-03-25.
//

#ifndef KREPSINIO_KOMANDA_LKL_H
#define KREPSINIO_KOMANDA_LKL_H
#include <vector>
#include <iostream>
#include "RungtyniuTvarkarastis.h"
#include "Rungtynes.h"

using namespace  std;



class LKL : public Rungtynes{
public:
    LKL();
    static void IdetiNaujasVarzybas(RungtyniuTvarkarastis rungtyniuTvarkarastis);

    const vector<RungtyniuTvarkarastis> &getRungtyniuTvarkarastis() const;

private:
    vector<RungtyniuTvarkarastis> rungtyniuTvarkarastis;



};


#endif //KREPSINIO_KOMANDA_LKL_H


