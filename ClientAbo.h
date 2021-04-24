#pragma once
#include "Client.h"
using namespace std;
class ClientAbo: public Client
{
    int duréeMois;
    string typeAbo;
public:
    ClientAbo();//need to call the parent class' constructor (define it first)
    ~ClientAbo(){}
    friend ostream& operator<<(ostream&,ClientAbo&);
    friend istream& operator>>(istream&,ClientAbo&);
};