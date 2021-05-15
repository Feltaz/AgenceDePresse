#pragma once
#include <iostream>
#include "Date.h"
using namespace std;
class Actualite
{
    string theme;//theme de l'actualité
    Date dateActu;//date de l'actualité
    string globalOrLocal;//permet de savoir si l'actu est globale ou locale
public:
    Actualite(string ="N/A",Date =(1,1,1111),string="N/A");
    ~Actualite(){}
    friend ostream& operator<<(ostream&,Actualite&);
    friend istream& operator>>(istream&, Actualite&);
};
ostream& operator<<(ostream& out,Actualite& A)
{
    out<<"\ntheme: "<<A.theme<<"\n";
    out<<"\ndate de l'Actualité:\n";
    out<<A.dateActu;
    out<<"\nglobal ou local?\n"<<A.globalOrLocal<<"\n";
    return out;
}
istream& operator>>(istream& in,Actualite& A )
{
    cout<<"\nSaisir le theme: \n";
    in>>A.theme;
    cout<<"\nsaisir la date\n";
    in>>A.dateActu;
    cout<<"\nglobal ou local? \n";
    in>>A.globalOrLocal;
    return in;
}
Actualite::Actualite(string t,Date d,string gOrL):theme(t),dateActu(d),globalOrLocal(gOrL)
{

}