#pragma once
#include <iostream>
#include <vector>
#include "Actualite.h"
#include "Article.h"
#include "ClientAbo.h"
#include "Journaliste_salarie.h"
#include "Materiel.h"
#include "Support.h"
#include <fstream>
using namespace std;
class Office 
{
protected:
    long idOffice;
    string nom;
    string adresse;
    vector<Actualite> tabActu;
    vector<Article> tabArti;
    vector<Client*> tabClient;
    vector<Journaliste*> tabJournal;
    vector<Materiel> tabMateriel;
    vector<Support> tabSupp;
   // static int counter=0;//counter to count how many offices exist within the press agency
public:
    static int count;
    static int getCount(){return count;}
    static void setCount(int ct){count=ct;}
    static void createFile(fstream&f){
         f.open("Office.bin",ios::in | ios::out |ios::trunc |ios::binary );
        if (!f.is_open()) exit (-1) ;}
    static void creer(fstream& );
    //static void remplir(fstream& );
    static void afficher(fstream& ); 
    Office(long id=0,string n="n/a",string addr="n/a"):idOffice(id),nom(n),adresse(addr){count++;}
    ~Office(){count--;}
    long getIdOffice(){return idOffice;}
    friend ostream& operator<<(ostream&,Office&);
    friend istream& operator>>(istream&,Office&);
    //
    friend void afficherActualite(Office&);
    friend void rechercherActualite(Office&);
    friend void ajouterActualite(Office& );
    friend void supprimerActualite(Office& );
    //
    friend void afficherArticle(Office&);
    friend void rechercherArticle(Office&);
    friend void ajouterArticle(Office& );
    friend void supprimerArticle(Office&);
    // 
    friend void afficherClient(Office& );
    friend void rechercherClient(Office& );
    friend void ajouterClient(Office& );
    friend void supprimerClient(Office&);
    // 
    friend void afficherJournaliste(Office& );
    friend void rechercherJournaliste(Office& );
    friend void ajouterJournaliste(Office& );
    friend void supprimerJournaliste(Office&);
    //
    friend void afficherMateriel(Office& );
    friend void rechercherMateriel(Office& );
    friend void ajouterMateriel(Office& );
    friend void supprimerMateriel(Office&);
    //
    friend void afficherSupport(Office& );
    friend void rechercherSupport(Office& );
    friend void ajouterSupport(Office& );
    friend void supprimerSupport(Office&);
    //
    template <typename T>
    void afficher(vector<T> a) {
        for(int i=0;i<a.size();i++)
            cout<<a[i];
    }
};
ostream& operator<<(ostream& out,Office& o)
{
    out<<"\nid:   "<<o.idOffice<<endl;
    out<<"\nnom:  "<<o.nom<<endl;
    out<<"\nAddresse"<<o.adresse<<endl;
}
istream& operator>>(istream& in,Office& o)
{
    cout<<"\nid:   ";
    in>>o.idOffice;
    cout<<"\nnom:  ";
    in>>o.nom;
    cout<<"\nadresse:   ";
    in>>o.adresse;
}
void Office::creer(fstream& f) 
{
    f.open("data.txt",ios::in | ios::out | ios::trunc);
    if(!f.is_open()) exit(-1);
}
