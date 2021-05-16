#pragma once
#include <iostream>
using namespace std;
class Client
{
    long idClient;//id du client 
    string nom;//nom du client
    string prenom;//prenom du client
    string typeClient;//type de client indiv ou business
public:
    Client(long id=0,string n="n/a",string p="n/a",string ty="n/a"):idClient(id),nom(n),prenom(p),typeClient(ty){}
    ~Client(){};
    long getIdClient(){return idClient;}
    friend ostream& operator<<(ostream&,Client&);
    friend istream& operator>>(istream&,Client&);
};
ostream& operator<<(ostream& out,Client& clt)
{
    out<<"\nID du CLient:   ";
    out<<clt.idClient<<"\n";
    out<<"\nnom et prenom Client: ";
    out<<clt.nom<<" "<<clt.prenom<<"\n";
    out<<"\ntypeClient: ";
    out<<clt.typeClient<<"\n";
    return out;
}
istream& operator>>(istream& in,Client& clt)
{
    cout<<"\nID du CLient:   ";
    in>>clt.idClient;
    cout<<"\nnom et prenom Client: ";
    in>>clt.nom;
    in>>clt.prenom;
    cout<<"\ntypeClient: ";
    in>>clt.typeClient;
    return in;
}