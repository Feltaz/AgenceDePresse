#pragma once
#include <iostream>
#include <string>
using namespace std;
class Article
{
    long idArticle;
    string titre;
    string theme;
public:
    Article();
    ~Article(){}
    friend ostream& operator<<(ostream&,Article&);
    friend istream& operator>>(istream&,Article&);

};
