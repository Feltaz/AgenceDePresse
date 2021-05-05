#pragma once
#include <iostream>
using namespace std;
class Support
{
    string nom;
    string adresse;
public:
    Support(string n="n/a",string add="n/a"):nom(n),adresse(add){}
    ~Support();
    friend ostream& operator<<(ostream&,Support&);
    friend istream& operator>>(istream&,Support&);
};
ostream& operator<<(ostream& out,Support&s)
{
    out<<s.nom;
    out<<s.adresse;
    return out;    
}
istream& operator>>(istream& in,Support&s)
{
    in>>s.nom;
    in>>s.adresse;
    return in;
}