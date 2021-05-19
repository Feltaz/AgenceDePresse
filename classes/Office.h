#pragma once
#include <iostream>
#include <vector>
#include "Actualite.h"
#include "Article.h"
#include "ClientAbo.h"
#include "Journaliste_salarie.h"
#include "Materiel.h"
#include "Support.h"
using namespace std;
class Office 
{
protected:
    long idOffice;
    string nom;
    string adresse;
    string typeAgence;
    vector<Actualite> tabActu;
    vector<Article> tabArti;
    vector<Client*> tabClient;
    vector<Journaliste*> tabJournal;
    vector<Materiel> tabMateriel;
   // static int counter=0;//counter to count how many offices exist within the press agency
public:
    static int count;
    static int getCount(){return count;}
    static void setCount(int ct){count=ct;}
    Office(long id=0,string n="n/a",string addr="n/a",string t="n/A"):idOffice(id),nom(n),adresse(addr),typeAgence(t){count++;}
    ~Office(){count--;}
    friend ostream& operator<<(ostream&,Office&);
    friend istream& operator>>(istream&,Office&);
    friend void afficherActualite(Office&);
    friend void rechercherActualite(Office&);
    friend void ajouterActualite(Office& ); 
    friend void afficherArticle(Office&);
    friend void rechercherArticle(Office&);
    friend void ajouterArticle(Office& );
    // 
    friend void afficherClient(Office& );
    friend void rechercherClient(Office& );
    friend void ajouterClient(Office& );
    // 
    friend void afficherJournaliste(Office& );
    friend void rechercherJournaliste(Office& );
    friend void ajouterJournaliste(Office& ); 
    //
    friend void afficherMateriel(Office& );
    friend void rechercherMateriel(Office& );
    friend void ajouterMateriel(Office& );

};