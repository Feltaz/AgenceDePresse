#pragma once
#include <iostream>
#include "../classes/Office.h"
#include "../Functions/actualiteFunctions.h"
#include"../Functions/articleFunctions.h"
#include "../Functions/clientFunctions.h"
using namespace std;
void pause()//function to pause 
{
    do 
    {
        cout << '\n' << "Press a key to continue...";
        cin.get();
    } while (cin.get() == '\n');
}
/*void menuClientAbo(Office& o)
{
    bool exit=false;
    do 
    {
        int rep;

    }while(!exit);
}*/
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
        cout<<"\n4:Acceder au menu Clients Abonnés";
        cout<<"\nappuyer sur 0 pour revenir au menu Principal\n";
        cin>>rep;
        switch(rep){
            case 0:exit=true;break;//exit to main menu
            case 1:afficherClient(o);pause();break;//appel fonction affichage des Actualités
            case 2:rechercherClient(o);pause();break;
            case 3:ajouterClient(o);pause();break;
            /*case 4:menuClientAbo(o)*/
        }
    } while (!exit);
    
    
}
void menuArticle(Office& o)
{
    ;//creation de l'office NB this should happen at program startup (still working that out )
    bool exit=false;//exit status of the menu
    do 
    {   int rep;//reponse au menu Actu
        cout<<"\n********Menu Article**************\n";
        cout<<"\n1:Afficher les Articles \n";
        cout<<"\n2:Rechercher un Article \n";
        cout<<"\n3:Ajouter un Article\n";
        cout<<"\nappuyer sur 0 pour revenir au menu Principal\n";
        cin>>rep;
        switch(rep){
            case 0:exit=true;break;//exit to main menu
            case 1:afficherArticle(o);pause();break;//appel fonction affichage des Actualités
            case 2:rechercherArticle(o);pause();break;
            case 3:ajouterArticle(o);pause();break;
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
        cout<<"\nappuyer sur 0 pour revenir au menu Principal\n";
        cin>>rep;
        switch(rep){
            case 0:exit=true;break;//exit to main menu
            case 1:afficherActualite(o);pause();break;//appel fonction affichage des Actualités
            case 2:rechercherActualite(o);pause();break;
            case 3:ajouterActualite(o);pause();break;
        }
    }while(!exit);
}
void menuPrincipal(Office& o)
{   bool exit=false;//choice to input
    do {
        int choix;
    string divers[9]={"Actualité","Article","Client","Client Abonné","Journalistes ","Journalistes salariés","Materiel","Office","Support"};//tableau pour storer les noms des classes
do
    {
        cout<<"\n************bienvenue au menu principal****************\n ";
        for(int i=0;i<9;i++)
        {
            cout<<"\n"<<i+1<<" Acceder au menu "<<divers[i]<<": \n";
        }
        cout<<"\n0: Pour quitter le Programme\n";
        cout<<"\n Veuillez saisir votre choix: \n";
        cin>>choix;
        
    }while(choix<0||choix>9);
    switch(choix) {
            case 0:cout<<"\nAu revoir\n";exit=true;break;
            case 1:menuActualite(o);break;
            case 2:menuArticle(o);break;
            case 3:menuClient(o);break;
            /*case 4:menuClientAbo();break;
            case 5:menuJournalistesSalarie();break;
            case 6:menuJournaliste();break;
            case 7:menuMateriel();break;
            case 8:menuOffices();break;
            case 9:menuSupport();break;*/
        }
    }while(!exit);
}