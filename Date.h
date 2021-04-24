#pragma once
#include <iostream>
using namespace std;
class Date 
{
    int jour;
    int mois;
    int annee;
public:
    Date(int =1,int =1,int =1111);
    ~Date(){}
    int getJ(){return jour;}
    int getM(){return mois;}
    int getA(){return annee;}
    void setJour(int j){jour=j;}
    void setMois(int m){mois=m;}
    void setAnnee(int a){annee=a;}
};
Date::Date(int j,int m,int a):jour(j),mois(m),annee(a)
{}
