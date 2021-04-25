#pragma once
#include <iostream>
using namespace std;
class Client
{
    string nom;
    string prenom;
    string typeClient;
public:
    Client(string n="n/a",string p="n/a",string ty="n/a"):nom(n),prenom(p),typeClient(ty){}
    ~Client(){};
    friend ostream& operator<<(ostream&,Client&);
    friend istream& operator>>(istream&,Client&);
};
ostream& operator<<(ostream& out,Client& clt)
{
    out<<"\nnom et prenom Client: ";
    out<<clt.nom<<" "<<clt.prenom<<"\n";
    out<<"\ntypeClient: ";
    out<<clt.typeClient<<"\n";
    return out;
}
istream& operator>>(istream& in,Client& clt)
{
    in>>clt.nom;
    in>>clt.prenom;
    in>>clt.typeClient;
    return in;
}