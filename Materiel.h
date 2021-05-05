#pragma once
#include <iostream>
using namespace std;
class Materiel
{
    long idMat;
    long reference;
    string nomMat;
public:
    Materiel(long =0,long =0,string ="*****");
    ~Materiel();
    friend ostream& operator<<(ostream&,Materiel&);
    friend istream& operator>>(istream&,Materiel&);
};
Materiel::Materiel(long i,long ref,string nom):idMat(i),reference(ref),nomMat(nom)
{}
ostream& operator<<(ostream& out, Materiel& m)
{
    out<<m.idMat;
    out<<m.reference;
    out<<m.nomMat;
    return out;
}
istream& operator>>(istream& in, Materiel& m)
{
    in>>m.idMat;
    in>>m.reference;
    in>>m.nomMat;
    return in;
}
