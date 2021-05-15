#pragma once
#include <iostream>
using namespace std;
void menuActualite(int& choix)
{
    bool exit=false;//exit status of the menu
    do 
    {   int rep;
        cout<<"\n********Menu Actualité**************\n";
        cout<<"\n1:Afficher les Actualités \n";
        cout<<"\n2:Rechercher une Actualité \n";
        cout<<"\n3:Ajouter une Actualité\n";
        cout<<"\nappuyer sur 0 pour revenir au menu Principal\n";
        cin>>rep;
        if (rep==0) exit=true;
    }while(!exit);
}
void menuPrincipal(int& choix)
{   int choice;
    do {
    int dummyValue=99;
    string divers[9]={"Actualité","Article","Client","Client Abonné","Journalistes salariés","Journaliste","Materiel","Office","Support"};//tableau pour storer les noms des classes
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
            case 0:cout<<"\nAu revoir\n";choice=0;break;
            case 1:menuActualite(dummyValue);
           /* case 2:menuArticle();break;
            case 3:menuClient();break;
            case 4:menuClientAbo();break;
            case 5:menuJournalistesSalarie();break;
            case 6:menuJournaliste();break;
            case 7:menuMateriel();break;
            case 8:menuOffices();break;
            case 9:menuSupport();break;*/
        }
    }while(choice!=0);
}