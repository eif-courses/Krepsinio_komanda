//
// Created by Marius on 4/8/2021.
//

#include "Rungtynes.h"

Rungtynes::Rungtynes(const string &pavadinimas, const string &nuoData, const string &ikiData, const string &adresas)
    : pavadinimas(pavadinimas), nuoData(nuoData), ikiData(ikiData), adresas(adresas) {
  tvarkarastis.emplace_back("Zalgiris vs Rytas");
  tvarkarastis.emplace_back("Neptunas vs Rytas");
  tvarkarastis.emplace_back("Delikatesas vs Rytas");
}

const string &Rungtynes::GetPavadinimas() const {
  return pavadinimas;
}

const string &Rungtynes::GetNuoData() const {
  return nuoData;
}

const string &Rungtynes::GetIkiData() const {
  return ikiData;
}

const string &Rungtynes::GetAdresas() const {
  return adresas;
}

const vector<string> &Rungtynes::GetTvarkarastis() const {
  return tvarkarastis;
}
