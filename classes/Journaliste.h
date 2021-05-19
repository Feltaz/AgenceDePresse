#pragma once 
#include <iostream>
using namespace std;

class Journaliste
{
protected:
    long idJournaliste;
    string prenom;
    string nom;
    string expertise;
    string paysDeService;
    string nationalite;
public:
    static int count;//compteur des instances
    static int getCount(){return count;}//compteur des instances
    static void setCount(int ct){count=ct;}//compteur des instances
    Journaliste(long id=0,string p="n/a",string n="n/a",string exp="n/a",string pays="n/a",string nat="n/a"):idJournaliste(id),prenom(p),nom(n),expertise(exp),paysDeService(pays),nationalite(nat) {count++;}
    ~Journaliste(){count--;}
    long getIdJournaliste() {return idJournaliste;}
    friend ostream& operator<<(ostream&,Journaliste&);
    friend istream& operator>>(istream&,Journaliste&);
};
ostream& operator<<(ostream& out,Journaliste& j)
{
    cout<<"\nJournaliste ID:   ";
    out<<j.idJournaliste<<"\n";
    cout<<"\nnom et prenom: ";
    out<<j.prenom<<"  ";
    out<<j.nom<<"\n";
    cout<<"\nexpertise:   ";
    out<<j.expertise<<"\n";
    cout<<"\npays de service;  ";
    out<<j.paysDeService<<"\n";
    cout<<"\nNationalité:   ";
    out<<j.nationalite<<"\n";
    return out;
}
istream& operator>>(istream& in,Journaliste& j) 
{
    cout<<"\nJournaliste ID:\n";
    in>>j.idJournaliste;
    cout<<"\nnom et prenom :\n";
    in>>j.prenom;
    in>>j.nom;
    cout<<"\nExpertise:\n";
    in>>j.expertise;
    cout<<"\nPays de Service :\n";
    in>>j.paysDeService;
    cout<<"\nNationalité:\n";
    in>>j.nationalite;
    return in;
}