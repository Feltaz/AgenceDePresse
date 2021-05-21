#include <iostream>
#include "menu/menuPrincipal.h"
using namespace std;
int Article::count=0;
int Actualite::count=0;
int Client::count=0;
int Journaliste::count=0;
int Materiel::count=0;
int Office::count=0;
int Support::count=0;
int main(){
    fstream f;
    Office::creer(f);
    vector<Office> Agence;
    int choix=1;
    cout<<"\nBienvenue au programme de gestion d'Agence de Presse\n";
    do
    {
        cout<<"\nveuillez saisir les Informations relatives a l'office\n";
        Office o;
        cin>>o;
        Agence.push_back(o);
        f<<o;
        cout<<"\nVoulez vous saisir encore tapez 1 pour oui 0 pour non \n ";
        cin>>choix;
    }while(choix!=0);
    for(vector<Office>::iterator i=Agence.begin();i!=Agence.end();i++)
        cout<<*i;
    cout<<"\ntapez l'id de l'office à choisir: \n";
    Office selected;
    long choice;
    cin>>choice;
    for(vector<Office>::iterator i=Agence.begin();i!=Agence.end();i++)
        {
            
            if(choice!=i->getIdOffice()) 
            {
                continue;
            }
            else {
                cout<<"\nl'office choisi est: \n";
                cout<<*i;
                selected=*i;
                break;
            }
        cout<<"\nOffice non trouvée\n";
        }
    menuPrincipal(selected);
    f.close();
    return 0;
}