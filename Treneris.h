//
// Created by Gediminas on 2021-03-29.
//

#ifndef KREPSINIO_KOMANDA_TRENERIS_H
#define KREPSINIO_KOMANDA_TRENERIS_H

#include <vector>
#include "ASMUO.h"
#include "Zaidejas.h"

class Treneris : public ASMUO {
public:
    Treneris(const string&vardas, const string &pavarde, int amzius);

    void Meniu();

    void IdetiInformacija();

    void Sastatas();

    void Sudetis();

    void PerziuretiAnonsus();
    void UzregistruotiZaideja(Zaidejas zaidejas);

  const vector <Zaidejas> &GetKomanda() const;

private:
  vector<Zaidejas> komanda;
};


#endif //KREPSINIO_KOMANDA_TRENERIS_H
