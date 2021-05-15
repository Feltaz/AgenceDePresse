#pragma once
#include <iostream>
#include <vector>
#include "Actualite.h"
using namespace std;
class Office 
{
protected:
    long idOffice;
    string nom;
    string adresse;
    string typeAgence;
    vector<Actualite> tabActu;
   // static int counter=0;//counter to count how many offices exist within the press agency
public:
    Office(long id=0,string n="n/a",string addr="n/a",string t="n/A"):idOffice(id),nom(n),adresse(addr),typeAgence(t){
        char rep='n';
        do{
        Actualite a;
        cin>>a;
        tabActu.push_back(a);
        }while(rep=='o' || rep=='O');
        //counter++;
    }
    ~Office(){}
    friend ostream& operator<<(ostream&,Office&);
    friend istream& operator>>(istream&,Office&);
    friend void afficherActualite(Office&);
    friend void rechercherActualite(Office&);
};