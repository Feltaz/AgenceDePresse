#pragma once
#include <iostream>
using namespace std;
class Client
{
    string nom;
    string prenom;
    string typeClient;
public:
    Client();
    ~Client(){};
    friend ostream& operator<<(ostream&,Client&);
    friend istream& operator>>(istream&,Client&);
};