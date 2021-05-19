#pragma once
#include <iostream>
#include "Date.h"
using namespace std;
class Actualite 
{
protected:
    string titre;
    string theme;//theme de l'actualité
    Date dateActu;//date de l'actualité
    string globalOrLocal;//permet de savoir si l'actu est globale ou locale
public:
    static int count;
    static int getCount(){return count;}
    static void setCount(int ct){count=ct;}
    Actualite(string ="N/A", string ="N/A",Date =(1,1,1111),string="N/A");
    ~Actualite(){count--;}
    string getTitre(){return titre;}
    friend ostream& operator<<(ostream&,Actualite&);
    friend istream& operator>>(istream&, Actualite&);
};
ostream& operator<<(ostream& out,Actualite& A)
{
    cout<<"\n***************Debut Affichage Actualité***************\n";
    out<<"\ntitre: "<<A.titre<<"\n";
    out<<"\ntheme: "<<A.theme<<"\n";
    out<<"\ndate de l'Actualité:\n";
    out<<A.dateActu;
    out<<"\nglobal ou local?\n"<<A.globalOrLocal<<"\n";
    cout<<"\n***************Fin Affichage Actualité***************\n";
    return out;
}
istream& operator>>(istream& in,Actualite& A )//to edit some stuff to make it take in spaces and not break the program 
{
    cout<<"\n***************Debut saisie Actualité***************\n";
    cout<<"\nSaisir le titre: \n";
    in>>A.titre;
    cout<<"\nSaisir le theme: \n";
    in>>A.theme;
    cout<<"\nsaisir la date\n";
    in>>A.dateActu;
    cout<<"\nglobal ou local? \n";
    in>>A.globalOrLocal;
    cout<<"\n***************Fin  saisie Actualité***************\n";
    return in;
}
Actualite::Actualite(string tit ,string t,Date d,string gOrL):titre(tit),theme(t),dateActu(d),globalOrLocal(gOrL)
{
    count++;
}