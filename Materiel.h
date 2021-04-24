#pragma once
#include <iostream>
using namespace std;
class Materiel
{
    long idMat;
    long reference;
    string nomMat;
public:
    Materiel();
    ~Materiel();
    friend ostream& operator<<(ostream&,Materiel&);
    friend istream& operator>>(istream&,Materiel&);
};