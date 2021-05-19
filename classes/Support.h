#pragma once
#include <iostream>
using namespace std;
class Support
{
    long idSupport;
    string nom;
    string adresse;
    string typeDeSupport;
public:
    static int count;
    static int getCount(){return count;}
    static void setCount(int ct){count=ct;}
    Support(long id=0,string n="n/a",string add="n/a",string type="N/A"):idSupport(id),nom(n),adresse(add),typeDeSupport(type){count++;}
    ~Support(){count--;}
    long getIdSupport(){return idSupport;}
    friend ostream& operator<<(ostream&,Support&);
    friend istream& operator>>(istream&,Support&);
};
ostream& operator<<(ostream& out,Support&s)
{
    cout<<"\nID du Support:\n";
    out<<s.idSupport;
    cout<<"\nNom du support:\n";
    out<<s.nom;
    cout<<"\nAdresse du support\n";
    out<<s.adresse;
    cout<<"\ntype du support:\n";
    out<<s.typeDeSupport;
    return out;    
}
istream& operator>>(istream& in,Support&s)
{   
    cout<<"\nID du Support:\n";
    in>>s.idSupport;
    cout<<"\nNom du support:\n";
    in>>s.nom;
    cout<<"\nAdresse du support\n";
    in>>s.adresse;
    cout<<"\ntype du support:\n";
    in>>s.typeDeSupport;
    return in;//commentaire
    
}