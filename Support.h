#pragma once
#include <iostream>
using namespace std;
class Support
{
    string nom;
    string adresse;
public:
    Support();
    ~Support();
    friend ostream& operator<<(ostream&,Support&);
    friend istream& operator>>(istream&,Support&);
};