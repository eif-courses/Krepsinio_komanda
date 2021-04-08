//
// Created by Gediminas on 2021-03-25.
//

#include "Agentas.h"
#include "windows.h"
//void setcolor( unsigned char color )
//{
  //  SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), color );
//}


Agentas::Agentas(const string &vardas, const string &pavarde, int amzius) : ASMUO(vardas, pavarde, amzius) {}
void Agentas::Info() {
    cout<<"Agentas"<<vardas<<"pav:"<<pavarde<<endl;

}
void Agentas::IdetiInformacija(Vadybininkas vadybininkas) {
    int premija;
    string pavadinimas, varzybos;
    cout<<"----------------------------------"<<endl;
    cout<<"----------Būsimos varžybos--------"<<endl;
    cout<<"----------------------------------"<<endl;
cout<<"Nurodykite pavadinima";
cin.ignore();

getline(cin,pavadinimas);
cout<<"Nurodykite varzybas:";

getline(cin,varzybos);

cout<<"Nurodykite premija";
cin>>premija;

cout<<"premija"<<premija<<","<<pavadinimas<<","<<varzybos<<endl;

RungtyniuTvarkarastis anonsas(pavadinimas,varzybos,premija);

    //vadybininkas.IdetiInformacija(RungtyniuTvarkarastis(pavadinimas,varzybos,premija));
    vadybininkas.IdetiInformacija(anonsas);


}

void Agentas::Meniu(Vadybininkas vadybininkas) {

//}

//void Agentas::Meniu() {
    int  input = 100;

    while (input!= 0){
  // setcolor( 0x00 );
        cout<<"-----------------------"<<endl;
        cout<<"-----AGENTŪROS MENIU---"<<endl;
        cout<<"-----------------------"<<endl;
        cout<<"1.  Įdėti skelbimą"<<endl;
        cout<<"2.  Agentūros informacija"<<endl;
        cout<<"0.  Grįžti atgal"<<endl;
       // setcolor( 0x01 );

        cin >> input;


        switch (input){
            case 1:
                IdetiInformacija(vadybininkas);
                break;
            case 2:
                break;
            default:
                cout<<"Tokio punkto nėra, naudokite paruoštą sąrašą pvz: 1, 2,"<<endl;
                break;

        }



    }

}


//void Agentas::IdetiInformacija(RungtyniuTvarkarastis rungtyniuTvarkarastis) {
//    vadybininkas.IdetiInformacija()

//}

