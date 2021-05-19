#pragma once
#include <iostream>
#include <string>
using namespace std;
class Article
{
protected:
    long idArticle;//idArticle
    string titre;//titre de l'article
    string theme;//theme de l'article
    string body;
public:
    static int count;
    static int getCount(){return count;}
    static void setCount(int ct){count=ct;}
    Article(long i=0,string t="n/a",string th="n/a",string b="lorem ipsum dolor sit amet "):idArticle(i),titre(t),theme(th),body(b){count++;}
    ~Article(){count--;}
    string getTitre(){return titre;}
    long getIdArticle(){return idArticle;}
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
    out<<"\nArticle:  \n";
    out<<a.body<<"\n";
    out<<"\n-----------Fin Article------------------\n";
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
    cout<<"\n Ecrire l'Article:   \n";
    in.ignore();
    getline(in,a.body);
    return in;
}