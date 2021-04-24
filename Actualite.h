#pragma once
#include <iostream>
#include "Date.h"
using namespace std;
class Actualite
{
    string theme;
    Date dateActu;
    string globalOrLocal;
public:
    Actualite(string ="N/A",Date =(1,1,1111),string="N/A");
    ~Actualite(){}
    friend ostream& operator<<(ostream&,Actualite&);
    friend istream& operator>>(istream&, Actualite&);
};
Actualite::Actualite(string t,Date d,string gOrL):theme(t),dateActu(d),globalOrLocal(gOrL)
{

}