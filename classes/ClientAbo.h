#pragma once
#include "Client.h"
using namespace std;
class ClientAbo: public Client
{
    int dureeMois;//durée de l'abo
    string typeAbo;//type de l'abonnement
public:
    ClientAbo(long id=0,string n="n/a",string p="n/a",string ty="n/a",int dur=0,string tya="n/a"):Client(id,n,p,ty),dureeMois(dur),typeAbo(tya){}//need to call the parent class' constructor (define it first)
    ~ClientAbo(){}
    friend ostream& operator<<(ostream&,ClientAbo&);
    friend istream& operator>>(istream&,ClientAbo&);
};
ostream& operator<<(ostream& out,ClientAbo& ca)
{
    Client*c=&ca;
    out<<*c;//appel de << de la classe Client
    out<<"\ndurée de l'abonnement:  ";
    out<<ca.dureeMois<<"\n";
    out<<"\nLe type d'abonnement est:  ";
    out<<ca.typeAbo<<"\n";
    return out;
}
istream& operator>>(istream& in, ClientAbo&ca)
{
    Client *c=&ca;
    in>>*c;
    cout<<"\ntapez la durée de l'abonnement: \n";
    in>>ca.dureeMois;
    cout<<"\ntapez le type d'abonnement:  \n";
    in>>ca.typeAbo;
    return in;
}