//
// Created by Gediminas on 2021-03-25.
//

#ifndef KREPSINIO_KOMANDA_ZAIDEJAS_H
#define KREPSINIO_KOMANDA_ZAIDEJAS_H
#include "ASMUO.h"



class Zaidejas : public ASMUO{
public:
    Zaidejas(const string &vardas, const string &pavarde, int amzius, string pozicija);

  const string &GetPozicija() const;

private:
  string pozicija;
};


#endif //KREPSINIO_KOMANDA_ZAIDEJAS_H
