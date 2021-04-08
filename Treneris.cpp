//
// Created by Gediminas on 2021-03-29.
//

#include "Treneris.h"
#include "LKL.h"
#include<iostream>


void PerziuretiPasirinkima();
void Treneris::UzregistruotiZaideja(Zaidejas zaidejas){
  komanda.emplace_back(zaidejas);
}

Treneris::Treneris(const string &vardas, const string &pavarde, int amzius) : ASMUO(vardas, pavarde, amzius) {

}


void Treneris::Meniu() {
  int input = 100;

  while (input != 0) {

    cout << "-----------------------" << endl;
    cout << "----Trenerio  MENIU----" << endl;
    cout << "-----------------------" << endl;
    cout << "1.  Komandos sudėtis " << endl;
    cout << "2.  Sąstatas " << endl;
    cout << "0.  Grįžti atgal" << endl;

    cin >> input;

int a = 10; // 10
 int b = 20; // 20
    switch (input) {
      case 1:
        Treneris Sudetis(); // 1 egz -> a
        //Treneris PerziuretiAnonsus();
        break;
      case 2:
        //Treneris Sastatas(); // 2 egz -> b

        for(const auto& narys: komanda){
          cout << narys.getVardas() << endl;
        }

        break;
      default:
        cout << "Tokio punkto nėra, naudokite paruoštą sąrašą pvz: 1, 2," << endl;
        break;

    }


  }

}


void Treneris::Sudetis() {
  int input = 100;

  while (input != 0) {

    cout << "-----------------------" << endl;
    cout << "----Komandos sudetis---" << endl;
    cout << "-----------------------" << endl;
    cout << "1.  Startinis penketas " << endl;
    cout << "2.  Atsarginiai " << endl;
    cout << "0.  Grįžti atgal" << endl;

    cin >> input;


    switch (input) {
      case 1:
        Treneris IdetiInformacija();
        break;
      case 2:
        cout << "Peržiūrėti  info" << endl;
        break;
      default:
        cout << "Tokio punkto nėra, naudokite paruoštą sąrašą pvz: 1, 2," << endl;
        break;

    }


  }

}

void Treneris::Sastatas() {
  int input = 100;

  while (input != 0) {

    cout << "-----------------------" << endl;
    cout << "------Sastatas---------" << endl;
    cout << "-----------------------" << endl;
    cout << "1.  1 " << endl;
    cout << "2.  2 " << endl;
    cout << "0.  Grįžti atgal" << endl;

    cin >> input;


    switch (input) {
      case 1:
        Treneris IdetiInformacija();
        break;
      case 2:
        cout << "Peržiūrėti  info" << endl;
        break;
      default:
        cout << "Tokio punkto nėra, naudokite paruoštą sąrašą pvz: 1, 2," << endl;
        break;

    }


  }

}

void Treneris::PerziuretiAnonsus() {

}

const vector<Zaidejas> &Treneris::GetKomanda() const {
  return komanda;
}
