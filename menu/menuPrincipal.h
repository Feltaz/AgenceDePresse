#pragma once
#include <iostream>
#include "../classes/Office.h"
#include "../Functions/actualiteFunctions.h"
#include"../Functions/articleFunctions.h"
#include "../Functions/clientFunctions.h"
#include "../Functions/journalisteFunctions.h"
#include "../Functions/materielFunctions.h"
#include "../Functions/supportFunctions.h"
using namespace std;
void pause()//function to pause 
{
    do 
    {
        cout << '\n' << "Tapez n'importe quelle touche pour continuer...\n";
        cin.get();
    } while (cin.get() == '\n');
}
void menuSupport(Office& o)
{
    bool exit=false;//exit status of the menu
    do 
    {   int rep;//reponse au menu Support
        cout<<"\n********Menu Support**************\n";
        cout<<"\n1:Afficher  Support \n";
        cout<<"\n2:Rechercher du Support \n";
        cout<<"\n3:Ajouter du Support\n";
        cout<<"\n4:Afficher le nombre du Support\n";
        cout<<"\n5:Supprimer du Support\n";
        cout<<"\nappuyer sur 0 pour revenir au menu Principal\n";

        cin>>rep;
        switch(rep){
            case 0:exit=true;break;//exit to main menu
            case 1:afficherSupport(o);pause();break;//appel fonction affichage des Support
            case 2:rechercherSupport(o);pause();break;
            case 3:ajouterSupport(o);pause();break;
            case 4:cout<<"\nle nombre est: "<<Support::getCount()<<endl;pause();break;
            case 5:supprimerSupport(o);pause();break;
        }
    
    }while(!exit);
}
void menuMateriel(Office& o)
{
    bool exit=false;//exit status of the menu
    do 
    {   int rep;//reponse au menu Materiel
        cout<<"\n********Menu Materiel**************\n";
        cout<<"\n1:Afficher  Materiels \n";
        cout<<"\n2:Rechercher du Materiel \n";
        cout<<"\n3:Ajouter du Materiel\n";
        cout<<"\n4:Afficher le nombre du Materiel\n";
        cout<<"\n5:Supprimer du Materiel\n";
        cout<<"\nappuyer sur 0 pour revenir au menu Principal\n";

        cin>>rep;
        switch(rep){
            case 0:exit=true;break;//exit to main menu
            case 1:afficherMateriel(o);pause();break;//appel fonction affichage du Materiel
            case 2:rechercherMateriel(o);pause();break;
            case 3:ajouterMateriel(o);pause();break;
            case 4:cout<<"\nle nombre est: "<<Materiel::getCount()<<endl;pause();break;
            case 5:supprimerMateriel(o);pause();break;
        }
    
    }while(!exit);
}
void menuJournaliste(Office& o)
{
    bool exit=false;
    do
    {
        int rep;
        cout<<"\n********Menu Journaliste**************\n";
        cout<<"\n1:Afficher les Journaliste \n";
        cout<<"\n2:Rechercher un Journaliste \n";
        cout<<"\n3:Ajouter un Journaliste\n";
        cout<<"\n4:Afficher le nombre de Journaliste\n";
        cout<<"\n5:Supprimer un Journaliste\n";
        cout<<"\nappuyer sur 0 pour revenir au menu Principal\n";
        cin>>rep;
        switch(rep){
            case 0:exit=true;break;//exit to main menu
            case 1:afficherJournaliste(o);pause();break;//appel fonction affichage des Journaliste
            case 2:rechercherJournaliste(o);pause();break;
            case 3:ajouterJournaliste(o);pause();break;
            case 4:cout<<"\nle nombre est: "<<Journaliste::getCount()<<endl;pause();break;
            case 5:supprimerJournaliste(o);pause();break;
        }
    } while (!exit);
}
void menuClient(Office& o)
{
    bool exit=false;
    do
    {
        int rep;
        cout<<"\n********Menu Client**************\n";
        cout<<"\n1:Afficher les Clients \n";
        cout<<"\n2:Rechercher un Clients \n";
        cout<<"\n3:Ajouter un Clients\n";
        cout<<"\n4:Afficher le nombre de Client\n";
        cout<<"\n5: Supprimmer  un Client\n";
        cout<<"\nappuyer sur 0 pour revenir au menu Principal\n";
        cin>>rep;
        switch(rep){
            case 0:exit=true;break;//exit to main menu
            case 1:afficherClient(o);pause();break;//appel fonction affichage des Clients
            case 2:rechercherClient(o);pause();break;
            case 3:ajouterClient(o);pause();break;
            case 4:cout<<"\nle nombre est: "<<Client::getCount()<<endl;pause();break;
            case 5:supprimerClient(o);pause();break;
        }
    } while (!exit);
    
    
}
void menuArticle(Office& o)
{
    //creation de l'office NB this should happen at program startup (still working that out )
    bool exit=false;//exit status of the menu
    do 
    {   int rep;//reponse au menu Actu
        cout<<"\n********Menu Article**************\n";
        cout<<"\n1:Afficher les Articles \n";
        cout<<"\n2:Rechercher un Article \n";
        cout<<"\n3:Ajouter un Article\n";
        cout<<"\n4:Afficher le nombre d'Article\n";
        cout<<"\n5: Supprimer  un Article\n";
        cout<<"\nappuyer sur 0 pour revenir au menu Principal\n";
        cin>>rep;
        switch(rep){
            case 0:exit=true;break;//exit to main menu
            case 1:afficherArticle(o);pause();break;//appel fonction affichage des Articles
            case 2:rechercherArticle(o);pause();break;
            case 3:ajouterArticle(o);pause();break;
            case 4:cout<<"\nle nombre est: "<<Article::getCount()<<endl;pause();break;
            case 5:supprimerArticle(o);pause();break;
        }
    
    }while(!exit);
}
void menuActualite(Office& o)
{  
    bool exit=false;//exit status of the menu
    do 
    {   int rep;//reponse au menu Actu
        cout<<"\n********Menu Actualité**************\n";
        cout<<"\n1:Afficher les Actualités \n";
        cout<<"\n2:Rechercher une Actualité \n";
        cout<<"\n3:Ajouter une Actualité\n";
        cout<<"\n4:Afficher le nombre d'Actualité\n";
        cout<<"\n5: Supprimer  une Actualité\n";
        cout<<"\nappuyer sur 0 pour revenir au menu Principal\n";
        cin>>rep;
        switch(rep){
            case 0:exit=true;break;//exit to main menu
            case 1:afficherActualite(o);pause();break;//appel fonction affichage des Actualités
            case 2:rechercherActualite(o);pause();break;
            case 3:ajouterActualite(o);pause();break;
            case 4:cout<<"\nle nombre est: "<<Actualite::getCount()<<endl;pause();break;
            case 5:supprimerActualite(o);pause();break;
        }
    }while(!exit);
}
void menuPrincipal(Office& o)
{   bool exit=false;//choice to input
    do {
        int choix;
    string divers[6]={"Actualité","Article","Client","Journalistes ","Materiel","Support"};//tableau pour storer les noms des classes
do
    {
        cout<<"\n************bienvenue au menu principal****************\n ";
        for(int i=0;i<6;i++)
        {
            cout<<"\n"<<i+1<<" Acceder au menu "<<divers[i]<<": \n";
        }
        cout<<"\n0: Pour quitter le Programme\n";
        cout<<"\n Veuillez saisir votre choix: \n";
        cin>>choix;
        
    }while(choix<0||choix>9);
    switch(choix) {
            case 0:cout<<"\nAu revoir à la prochaine\n";exit=true;break;
            case 1:menuActualite(o);break;
            case 2:menuArticle(o);break;
            case 3:menuClient(o);break;
            case 4:menuJournaliste(o);break;
            case 5:menuMateriel(o);break;
            case 6:menuSupport(o);break;
        }
    }while(!exit);
}