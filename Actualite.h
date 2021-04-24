#pragma once
#include <iostream>
#include "Date.h"
using namespace std;
class Actualite
{
    string theme;
    Date dateActu;
    string globalOrLocal;
public:
    Actualite();
    ~Actualite(){}
    friend ostream& operator<<(ostream&,Actualite&);
    friend istream& operator>>(istream&, Actualite&);
};