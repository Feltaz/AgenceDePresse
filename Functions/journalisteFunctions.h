#include <iostream>
#include "../classes/Office.h"
using namespace std;
void afficherJournaliste(Office& o) // can be turned into a template function(something to work on later on )
{
    cout<<"\n**********Affichage des Journaliste****************************";
    for(int i=0;i<o.tabJournal.size();i++)
        {
            if (typeid(*o.tabJournal[i])==typeid(Journaliste_salarie)) cout<<static_cast<Journaliste_salarie&>(*o.tabJournal[i]);
            else if(typeid(*o.tabJournal[i])==typeid(Journaliste))cout<<*(o.tabJournal[i]);
            cout<<"\n*****************************************************************************************************************\n";
            
        }
    cout<<"\n------------------------Fin Affichage des Journaliste-----------";
}
void rechercherJournaliste(Office& o)
{
    long recherche;
    cout<<"\nVeuillez saisir le ID du Journaliste souhaité  \n";
    cin>>recherche;
    for(vector<Journaliste*>::iterator i=o.tabJournal.begin();i!=o.tabJournal.end();++i)
        {
            
            if(recherche!=(*i)->getIdJournaliste()) 
            {
                continue;
            }
            else {
                cout<<"\nJournaliste souhaitée trouvée!!! \n";
                cout<<*(*i);
                break;
            }
        cout<<"\nJournaliste non trouvée\n";
        }
}
void ajouterJournaliste(Office& o) 
{
    fstream f;
    f.open("Journaliste.txt",ios::in |ios::out | ios::app);
    if (!f.is_open()) exit -5; 
    f.seekp(ios::end);
    std::cout<<"\n+++++++++++++++++++Debut Ajout du Journaliste+++++++++++++++++++\n";
    char rep='n';
    do{
        int choix;
        cout<<"\ntapez 1 pour Journaliste,tapez 2 pour Journaliste Salarié\n";
        cin>>choix;
        if(choix==1){Journaliste* journ=new Journaliste;
        cin>>*journ;
        f<<*journ;
        o.tabJournal.push_back(journ);}
        else if (choix ==2) {Journaliste_salarie* journ= new Journaliste_salarie;
        cin>>*journ;
        f<<*journ;
        o.tabJournal.push_back(journ);
        }
        std::cout<<"\nVoulez Vous saisir encore?: \n";//prompt for more user input
        cin>>rep; //answer input 
        }while(rep=='o' || rep=='O');
        f.close();
    cout<<"\n++++++++++++++++++++++++Fin Ajout du Journaliste+++++++++++++++++++++++++++++++++++++\n";
}
void supprimerJournaliste(Office& o)
{
    int id;
    bool found=false;
    int i=0;
    cout<<"\nentrez l'id pour supprimer:\n";
    cin>>id;
    while(!found)
    {
        if(o.tabJournal[i]->getIdJournaliste()==id)
            {
                delete o.tabJournal[i];
                o.tabJournal.erase(o.tabJournal.begin()+i);
                found=true;}
        if (i>(o.tabJournal.size()))
            break;
        i++;
        continue;
    }
}