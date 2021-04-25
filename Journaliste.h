#pragma once 
#include <iostream>
using namespace std;

class Journaliste
{
    long idJournaliste;
    string prenom;
    string nom;
    string expertise;
    string paysDeService;
    string nationalité;
public:
    Journaliste(long id=0,string p="n/a",string n="n/a",string exp="n/a",string pays="n/a",string nat="n/a"):idJournaliste(id),prenom(p),nom(n),expertise(exp),paysDeService(pays),nationalité(nat) {}
    ~Journaliste(){}
    friend ostream& operator<<(ostream&,Journaliste&);
    friend istream& operator>>(istream&,Journaliste&);
};
ostream& operator<<(ostream& out,Journaliste& j)
{
    out<<j.idJournaliste<<" ";
    out<<j.prenom<<" ";
    out<<""<<j.nom<<" ";
    out<<""<<j.expertise<<" ";
    out<<""<<j.paysDeService<<" ";
    out<<""<<j.nationalité<<" ";
    return out;
}
istream& operator>>(istream& in,Journaliste& j) 
{
    in>>j.idJournaliste;
    in>>j.prenom;
    in>>j.nom;
    in>>j.expertise;
    in>>j.paysDeService;
    in>>j.nationalité;
    return in;
}