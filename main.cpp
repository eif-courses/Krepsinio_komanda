#include <iostream>

#include <iostream>
#include "ASMUO.h"
#include "Agentas.h"
#include "Zaidejas.h"
#include "LKL.h"
#include <ctime>
#include <windows.h>
#include "Vadybininkas.h"
#include "Treneris.h"
#include "Rungtynes.h"

void setcolor(unsigned char color) {
  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}


int main() {
  setcolor(0x01);

  srand(time(NULL));
  SetConsoleOutputCP(CP_UTF8);

  LKL lkl;
  Vadybininkas francas("Francas", "Francaitis", 90, lkl);
  Vadybininkas milda("Milda", "Mildute", 16, lkl);

  Agentas Rytas("LRytas", "Vilnius  ", 1000);
  //ASMUO asmuo("Petras", " Piotr  ", 25);
  //asmuo.Informacija();
  //Agentas agentas("LRytas", "Vilnius  ", 1000);
  Zaidejas jonas("Jonas", "Jonaitis", 25, "Krastas");
  Zaidejas samas("Samas", "Samuelis", 23, "Izaidejas");
  Zaidejas sabas("Arvydas", "Sabas", 50, "Centras");
  Treneris valdas("Valdas", "Garastas", 90);

  Rungtynes rungtynes("LKL", "2021-04-08", "2021-07-27", "");


  cout << "CEMPIONATAS " << rungtynes.GetPavadinimas() << endl;
  cout << "Turnyro trukme " << rungtynes.GetNuoData() <<" iki " << rungtynes.GetIkiData() << endl;
  for(auto it: rungtynes.GetTvarkarastis()){
    cout << it << endl;
  }


  valdas.UzregistruotiZaideja(jonas);
  valdas.UzregistruotiZaideja(samas);
  valdas.UzregistruotiZaideja(sabas);
  int input = 100;

  while (input != 0) {
    //system("Color 1A");

    cout << "-----------------------" << endl;
    cout << "---------MENIU---------" << endl;
    cout << "-----------------------" << endl;
    cout << "1.  Žaidėjas " << endl;
    cout << "2.  Agentas" << endl;
    cout << "3.  Vadybininkas " << endl;
    cout << "4.  Treneris" << endl;
    cout << "0.  Uždaryti programą" << endl;
    cin >> input;

    switch (input) {
      case 1:
        cout << " Ieškau komandos" << endl;
        break;
      case 2:
        Rytas.Meniu(francas);

        break;
      case 3:
        francas.Meniu();
        cout << "Vadybininkas" << endl;
        break;
      case 4:
        valdas.Meniu();

        cout << "Renku komandą" << endl;
        break;
      default:
        cout << "Tokio punkto nėra, naudokite paruoštą sarašą pvz: 1, 2, 3," << endl;
        break;

    }


  }











  //LKL lkl;
  //for(RungtyniuTvarkarastis rungtynes: lkl.getRungtyniuTvarkarastis()){
  //    rungtynes.Informacija();
  //  }
  //lkl.getRungtyniuTvarkarastis();

//jonas.Informacija();
//agentas.Informacija();
  // agentas.Info();
  return 0;
}



