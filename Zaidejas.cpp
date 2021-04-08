//
// Created by Gediminas on 2021-03-25.
//

#include "Zaidejas.h"

Zaidejas::Zaidejas(const string &vardas, const string &pavarde, int amzius, string pozicija) : ASMUO(vardas, pavarde, amzius),
                                                                                               pozicija(pozicija) {}

const string &Zaidejas::GetPozicija() const {
  return pozicija;
}

