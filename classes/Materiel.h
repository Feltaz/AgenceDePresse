#pragma once
#include <iostream>
using namespace std;
class Materiel
{
    long idMat;
    long reference;
    string nomMat;
public:
    static int count;
    static int getCount(){return count;}
    static void setCount(int ct){count=ct;}
    Materiel(long =0,long =0,string ="*****");
    ~Materiel(){count--;}
    long getIdMateriel(){return idMat;} 
    friend ostream& operator<<(ostream&,Materiel&);
    friend istream& operator>>(istream&,Materiel&);
};
Materiel::Materiel(long i,long ref,string nom):idMat(i),reference(ref),nomMat(nom)
{count++;}
ostream& operator<<(ostream& out, Materiel& m)
{
    cout<<"\nID du materiel:  ";
    out<<m.idMat<<"\n";
    cout<<"\nReference du materiel:   ";
    out<<m.reference<<"\n";
    cout<<"\nNom du matériel:  ";
    out<<m.nomMat<<"\n";
    return out;
}
istream& operator>>(istream& in, Materiel& m)
{
    cout<<"\nID du materiel:\n";
    in>>m.idMat;
    cout<<"\nReference du materiel:\n";
    in>>m.reference;
    cout<<"\nNom du matériel:\n";
    in>>m.nomMat;
    return in;
}
