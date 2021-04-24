#pragma once 
#include <iostream>
using namespace std;

class Journaliste
{
    string prenom;
    string nom;
    string expertise;
    string paysDeService;
    string nationalité;
public:
    Journaliste();
    ~Journaliste(){}
    friend ostream& operator<<(ostream&,Journaliste&);
    friend istream& operator>>(ostream&,Journaliste&);
};