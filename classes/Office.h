#pragma once
#include <iostream>
using namespace std;
class Office 
{
    long idOffice;
    string nom;
    string adresse;
    string typeAgence;
public:
    Office(long id=0,string n="n/a",string addr="n/a",string t="n/A"):idOffice(id),nom(n),adresse(addr),typeAgence(t){}
    ~Office(){}
    friend ostream& operator<<(ostream&,Office&);
    friend istream& operator>>(istream&,Office&);
};