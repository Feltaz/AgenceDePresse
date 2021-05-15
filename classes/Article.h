#pragma once
#include <iostream>
#include <string>
using namespace std;
class Article
{
    long idArticle;//idArtickle
    string titre;//titre de l'article
    string theme;//theme de l'article
public:
    Article(long i=0,string t="n/a",string th="n/a"):idArticle(i),titre(t),theme(th){}
    ~Article(){}
    friend ostream& operator<<(ostream&,Article&);
    friend istream& operator>>(istream&,Article&);
};
ostream& operator<<(ostream& out, Article& a)
{
    out<<"\nidArticle: ";
    out<<a.idArticle<<"\n";
    out<<"\ntitre: ";
    out<<a.titre<<"\n";
    out<<"\ntheme: ";
    out<<a.theme<<"\n";
    return out;
}
istream& operator>>(istream& in, Article& a)
{
    cout<<"\nidArticle: ";
    in>>a.idArticle;
    cout<<"\ntitre: ";
    in>>a.titre;
    cout<<"\ntheme: ";
    in>>a.theme;
    return in;
}