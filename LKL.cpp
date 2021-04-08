//
// Created by Gediminas on 2021-03-25.
//

#include "LKL.h"

LKL::LKL() {
    RungtyniuTvarkarastis zalgiris("Varzybos", "Kaunas", 100);
    RungtyniuTvarkarastis neptunas("Varzybos", "Klaipeda", 200);
    RungtyniuTvarkarastis siauliai("Varzybos", "Siauliai", 400);
    RungtyniuTvarkarastis alytus("Astunfinalis", "Alytus", 500);


    rungtyniuTvarkarastis.emplace_back(zalgiris);
    rungtyniuTvarkarastis.emplace_back(neptunas);
    rungtyniuTvarkarastis.emplace_back(siauliai);
    rungtyniuTvarkarastis.emplace_back(alytus);



}

const vector<RungtyniuTvarkarastis> &LKL::getRungtyniuTvarkarastis() const {
    return rungtyniuTvarkarastis;
}

void LKL::IdetiNaujasVarzybas(RungtyniuTvarkarastis rungtyniuTvarkarastis) {
rungtyniuTvarkarastis.emplace_back(rungtyniuTvarkarastis);

}

