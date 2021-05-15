#pragma once
#include "Client.h"
using namespace std;
class ClientAbo: public Client
{
    int duréeMois;//durée de l'abo
    string typeAbo;//type de l'abonnement
public:
    ClientAbo(string n="n/a",string p="n/a",string ty="n/a",int dur=0,string tya="n/a"):Client(n,p,ty),duréeMois(dur),typeAbo(tya){}//need to call the parent class' constructor (define it first)
    ~ClientAbo(){}
    friend ostream& operator<<(ostream&,ClientAbo&);
    friend istream& operator>>(istream&,ClientAbo&);
};
ostream& operator<<(ostream& out,ClientAbo& ca)
{
    Client*c=&ca;
    out<<*c;//appel de << de la classe Client
    out<<ca.duréeMois;
    out<<ca.typeAbo;
    return out;
}
istream& operator>>(istream& in, ClientAbo&ca)
{
    Client *c=&ca;
    in>>*c;
    in>>ca.duréeMois;
    in>>ca.typeAbo;
    return in;
}