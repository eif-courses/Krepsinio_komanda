//
// Created by Gediminas on 2021-03-25.
//

#include "Vadybininkas.h"

Vadybininkas::Vadybininkas(const string &vardas, const string &pavarde, int amzius,LKL lkl )
: Treneris(vardas, pavarde,amzius), lkl (lkl) {}
    void Vadybininkas::Vadybininkas::IdetiInformacija(RungtyniuTvarkarastis rungtyniuTvarkarastis){
    if(rungtyniuTvarkarastis.getPremija()<=400 || rungtyniuTvarkarastis.getPavadinimas()==""|| rungtyniuTvarkarastis.getVarzybos()==""){
       cout<<" Jusu informacija nepatvirtinta"<<endl;
}else{lkl.IdetiNaujasVarzybas(rungtyniuTvarkarastis);
cout<<"Jusu informacija patvirtinta."<<endl;
    }
}
void Vadybininkas::PerziuretiAnonsus() {
    for(RungtyniuTvarkarastis rungtynes: lkl.getRungtyniuTvarkarastis()){
        rungtynes.Informacija();
    }
}

void Vadybininkas::Meniu() {
    int  input = 100;

    while (input!= 0){

        cout<<"-----------------------"<<endl;
        cout<<"---VADYBININKO  MENIU--"<<endl;
        cout<<"-----------------------"<<endl;
        cout<<"1.  Peržiūrėti skelbimą "<<endl;
        cout<<"2.  Peržiūreti agentūros informaciją"<<endl;
        cout<<"0.  Grįžti atgal"<<endl;

        cin >> input;


        switch (input){
            case 1:
                PerziuretiAnonsus();
                break;
            case 2:
                cout<<"Peržiūrėti agentūros info"<<endl;
                break;
            default:
                cout<<"Tokio punkto nėra, naudokite paruoštą sąrašą pvz: 1, 2,"<<endl;
                break;

        }



    }

}





