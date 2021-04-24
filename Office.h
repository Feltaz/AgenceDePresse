#pragma once
#include <iostream>
using namespace std;
class Office 
{
    long idOffice;
    string nom;
    string addresse;
    string typeAgence;
public:
    Office();
    ~Office(){}
    friend ostream& operator<<(ostream&,Office&);
    friend istream& operator>>(istream&,Office&);
};